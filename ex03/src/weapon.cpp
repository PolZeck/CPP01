/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 09:43:31 by pledieu           #+#    #+#             */
/*   Updated: 2025/06/21 16:28:05 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}
// Constructor initializes the weapon type when created

const std::string& Weapon::getType() const {
    return this->_type;  // Returns a const reference to the weapon's type (no copy, read-only)
}

void Weapon::setType(std::string newType) {
    this->_type = newType;  // Updates the weapon's type dynamically
}
