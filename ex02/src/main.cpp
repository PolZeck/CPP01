/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:00:43 by pledieu           #+#    #+#             */
/*   Updated: 2025/06/18 13:02:26 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// main.cpp
#include <iostream>
#include <string>

int main() {
    std::string brain = "HI THIS IS BRAIN";

    std::string* stringPTR = &brain;      // ptr to brian
    std::string& stringREF = brain;       // ref of brain

    // print adresses
    std::cout << "Adresse de brain      : " << &brain << std::endl;
    std::cout << "Adresse dans stringPTR: " << stringPTR << std::endl;
    std::cout << "Adresse dans stringREF: " << &stringREF << std::endl;

    // print values
    std::cout << "Valeur de brain       : " << brain << std::endl;
    std::cout << "Valeur pointée par PTR: " << *stringPTR << std::endl;
    std::cout << "Valeur via REF        : " << stringREF << std::endl;

    return 0;
}
