/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 09:44:30 by pledieu           #+#    #+#             */
/*   Updated: 2025/06/21 11:06:33 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
    : _name(name), _weapon(0) {}

void HumanB::setWeapon(Weapon& weapon) {
    this->_weapon = &weapon;
}

void HumanB::attack() const {
    if (this->_weapon)
        std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
    else
        std::cout << this->_name << " has no weapon!" << std::endl;
}
