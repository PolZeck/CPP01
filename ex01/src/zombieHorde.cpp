/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 12:22:21 by pledieu           #+#    #+#             */
/*   Updated: 2025/06/18 13:22:46 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// zombieHorde.cpp
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	if (N <= 0)
		return 0;

	Zombie* horde = new Zombie[N];  // array of Zombies

	for (int i = 0; i < N; ++i) {
		horde[i].setName(name);
	}

	return horde;
}
