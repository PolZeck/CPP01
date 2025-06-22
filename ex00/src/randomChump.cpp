/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 11:20:09 by pledieu           #+#    #+#             */
/*   Updated: 2025/06/22 07:48:59 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// randomChump.cpp
#include "Zombie.hpp"

void randomChump(std::string name)
{

    Zombie zombie(name);	// allocated on the stack

    zombie.announce();		// anounce himself
}
