/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 11:22:29 by pledieu           #+#    #+#             */
/*   Updated: 2025/06/21 16:28:51 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string replaceAll(const std::string& input, const std::string& s1, const std::string& s2) {
    std::string result;
    size_t pos = 0;
    size_t found;

    while ((found = input.find(s1, pos)) != std::string::npos) {
        result.append(input, pos, found - pos); // Add part before match
        result += s2;                           // Replace s1 with s2
        pos = found + s1.length();              // Move position after the match
    }

    result.append(input, pos, input.length() - pos); // Append what's left after the last match
    return result;
}


int main(int argc, char** argv) {
    if (argc != 4) {
        std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
        return 1;  // Requires exactly 3 arguments
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty()) {
        std::cerr << "Error: s1 cannot be empty." << std::endl;
        return 1;  // Prevents infinite loop if s1 is empty
    }

    std::ifstream infile(filename.c_str());
    if (!infile) {
        std::cerr << "Error: cannot open input file." << std::endl;
        return 1;
    }

    // Read the whole file content into a string
    std::string content((std::istreambuf_iterator<char>(infile)), std::istreambuf_iterator<char>());
    infile.close();

    std::string replaced = replaceAll(content, s1, s2);  // Replace all occurrences of s1 with s2

    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile) {
        std::cerr << "Error: cannot create output file." << std::endl;
        return 1;
    }

    outfile << replaced;  // Write the modified content to the new file
    outfile.close();

    return 0;
}
