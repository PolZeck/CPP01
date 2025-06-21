/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 11:46:21 by pledieu           #+#    #+#             */
/*   Updated: 2025/06/21 16:34:26 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl harl;

    harl.complain("DEBUG");    // Triggers the debug() method
    harl.complain("INFO");     // Triggers the info() method
    harl.complain("WARNING");  // Triggers the warning() method
    harl.complain("ERROR");    // Triggers the error() method
    harl.complain("NOTHING");  // Invalid level → triggers fallback message

    return 0;
}
