/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 11:20:15 by pledieu           #+#    #+#             */
/*   Updated: 2025/06/22 07:49:31 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// main.cpp
#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main() {
    Zombie* heapZombie = newZombie("HeapZ");	// Creates a Zombie on the heap
    heapZombie->announce();						// Prints: "HeapZ: BraiiiiiiinnnzzzZ..."
    delete heapZombie;							// Frees memory and calls the destructor

    randomChump("StackZ");						// Creates a Zombie on the stack, announces, and is destroyed automatically

    return 0;
}
