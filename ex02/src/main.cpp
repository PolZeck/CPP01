/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:00:43 by pledieu           #+#    #+#             */
/*   Updated: 2025/06/21 16:25:55 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// main.cpp
#include <iostream>
#include <string>

int main() {
    std::string brain = "HI THIS IS BRAIN";

    std::string* stringPTR = &brain;      // Pointer to the string 'brain' (stores its address)
    std::string& stringREF = brain;       // Reference to the same string (alias, not a copy)

    // print addresses
    std::cout << "Adresse de brain      : " << &brain << std::endl;
    std::cout << "Adresse dans stringPTR: " << stringPTR << std::endl;      // Should match &brain
    std::cout << "Adresse dans stringREF: " << &stringREF << std::endl;     // Should also match &brain

    // print values
    std::cout << "Valeur de brain       : " << brain << std::endl;
    std::cout << "Valeur pointée par PTR: " << *stringPTR << std::endl;     // Dereferences the pointer
    std::cout << "Valeur via REF        : " << stringREF << std::endl;      // Uses the reference

    return 0;
}
