/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 12:22:17 by pledieu           #+#    #+#             */
/*   Updated: 2025/06/21 16:24:44 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// main.cpp
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main() {
    int N = 5;
    Zombie* horde = zombieHorde(N, "zzonbi");  // Creates an array of N Zombies on the heap

    if (!horde)
        return 1;  // Fails gracefully if allocation didn't work

    for (int i = 0; i < N; ++i) {
        horde[i].announce();  // Each Zombie announces itself
    }

    delete[] horde;  // Deletes the entire array and calls destructors for each Zombie
    return 0;
}
