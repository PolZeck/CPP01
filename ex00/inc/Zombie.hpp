/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 11:30:59 by pledieu           #+#    #+#             */
/*   Updated: 2025/06/22 07:48:51 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// Zombie.hpp
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
    std::string _name;

public:
    Zombie(std::string name);   // constructor
    ~Zombie();                  // destructor

    void announce() const;      // annoucement 
};

#endif
