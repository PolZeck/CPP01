/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 12:18:56 by pledieu           #+#    #+#             */
/*   Updated: 2025/06/21 16:35:41 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Usage: ./harlFilter <LEVEL>" << std::endl;
        return 1;  // Requires exactly one argument
    }

    std::string level = argv[1];
    Harl harl;

    int lvl = -1;
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    // Find the index of the matching level
    for (int i = 0; i < 4; ++i) {
        if (level == levels[i]) {
            lvl = i;
            break;
        }
    }

	switch (lvl) {
        case 0:
            harl.complain("DEBUG");   // Fall through on purpose
        case 1:
            harl.complain("INFO");    // Fall through
        case 2:
            harl.complain("WARNING"); // Fall through
        case 3:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }

    return 0;
}
