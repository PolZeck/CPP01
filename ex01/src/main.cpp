/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 12:22:17 by pledieu           #+#    #+#             */
/*   Updated: 2025/06/18 11:51:12 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// main.cpp
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main() {
    int N = 5;
    Zombie* horde = zombieHorde(N, "zzonbi");

    if (!horde)
        return 1;

    for (int i = 0; i < N; ++i) {
        horde[i].announce();
    }

    delete[] horde;  // cleaning
    return 0;
}
