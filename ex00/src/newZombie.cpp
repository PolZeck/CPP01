/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 11:20:14 by pledieu           #+#    #+#             */
/*   Updated: 2025/06/21 16:18:20 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// newZombie.cpp
#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
    return new Zombie(name);  // Allocates a Zombie on the heap and returns a pointer to it
}
