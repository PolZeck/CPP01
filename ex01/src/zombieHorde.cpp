/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 12:22:21 by pledieu           #+#    #+#             */
/*   Updated: 2025/06/21 16:25:21 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// zombieHorde.cpp
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	if (N <= 0)
		return 0;  // Defensive check: returns null if N is invalid

	Zombie* horde = new Zombie[N];  // Allocates an array of N Zombies using default constructor

	for (int i = 0; i < N; ++i) {
		horde[i].setName(name);  // Sets the same name for each Zombie in the horde
	}

	return horde;  // Returns pointer to the first Zombie in the array
}
