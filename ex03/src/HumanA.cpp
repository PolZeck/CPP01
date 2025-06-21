/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 09:44:05 by pledieu           #+#    #+#             */
/*   Updated: 2025/06/21 16:26:18 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
    : _name(name), _weapon(weapon) {}  // Constructor initializes name and stores a reference to the weapon (must not be null)

void HumanA::attack() const {
    std::cout << this->_name << " attacks with their " << _weapon.getType() << std::endl;  // Uses the weapon’s type to describe the attack
}
