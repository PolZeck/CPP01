/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 12:21:33 by pledieu           #+#    #+#             */
/*   Updated: 2025/06/21 16:25:35 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// Zombie.hpp
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
    std::string _name;  // Stores the name of the Zombie

public:
    Zombie();                     // Default constructor (required for array allocation)
    Zombie(std::string name);     // Constructor that sets the Zombie’s name
    ~Zombie();                    // Destructor that announces when a Zombie is destroyed

    void announce() const;       // Displays the Zombie’s name and message
    void setName(std::string name);  // Allows assigning a name after default construction
};

#endif
