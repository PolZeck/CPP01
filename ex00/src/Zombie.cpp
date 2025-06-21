/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 11:20:12 by pledieu           #+#    #+#             */
/*   Updated: 2025/06/21 16:21:22 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// Zombie.cpp
#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << "Zombie has been created !🧟" << std::endl;  // Constructor message when a Zombie is created
}

Zombie::~Zombie() {
	std::cout << this->_name << " has been destroyed 🧹" << std::endl;  // Destructor message when a Zombie is destroyed
}

void Zombie::announce() const {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;  // Announces the Zombie’s identity and hunger
}

