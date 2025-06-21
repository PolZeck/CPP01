/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 09:44:30 by pledieu           #+#    #+#             */
/*   Updated: 2025/06/21 16:26:53 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
    : _name(name), _weapon(0) {}  // Initializes name and sets weapon pointer to null (HumanB starts unarmed)

void HumanB::setWeapon(Weapon& weapon) {
    this->_weapon = &weapon;  // Assigns a weapon later via pointer
}

void HumanB::attack() const {
    if (this->_weapon)
        std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;  // Uses the weapon’s type if armed
    else
        std::cout << this->_name << " has no weapon!" << std::endl;  // Displays message if weapon is not assigned
}
