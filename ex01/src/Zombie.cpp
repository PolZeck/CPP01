/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 12:21:45 by pledieu           #+#    #+#             */
/*   Updated: 2025/06/21 16:25:07 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// Zombie.cpp
#include "Zombie.hpp"

Zombie::Zombie() {
    // Default constructor required for creating Zombie arrays (no name yet)
}

Zombie::Zombie(std::string name) : _name(name) {}  // Constructor that sets the name directly

Zombie::~Zombie() {
    std::cout << _name << " has been destroyed 🧹" << std::endl;  // Destructor message
}

void Zombie::announce() const {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;  // Announces the Zombie’s name and hunger
}

void Zombie::setName(std::string name) {
    this->_name = name;  // Allows setting name after default construction (used in zombieHorde)
}
