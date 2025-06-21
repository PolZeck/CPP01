/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 11:45:55 by pledieu           #+#    #+#             */
/*   Updated: 2025/06/21 16:35:01 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl {
private:
	void debug(void);    // Outputs a debug-level message
	void info(void);     // Outputs an info-level message
	void warning(void);  // Outputs a warning-level message
	void error(void);    // Outputs an error-level message

public:
	void complain(std::string level);  // Calls the appropriate message method based on the level string
};
	
#endif
