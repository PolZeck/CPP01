/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 09:44:53 by pledieu           #+#    #+#             */
/*   Updated: 2025/06/21 16:27:50 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);  // HumanA is always armed (weapon passed by reference)
		bob.attack();             // Uses initial weapon type
		club.setType("some other type of club");  // Weapon type is changed dynamically
		bob.attack();             // Reflects the new weapon type
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");        // HumanB starts unarmed
		jim.setWeapon(club);      // Weapon is set after construction
		jim.attack();             // Uses current weapon type
		club.setType("some other type of club");  // Change weapon type again
		jim.attack();             // Weapon change is reflected here too
	}
	return 0;
}
