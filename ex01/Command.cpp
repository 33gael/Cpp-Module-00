/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Command.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeducas <gaeducas@student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 14:04:05 by gaeducas          #+#    #+#             */
/*   Updated: 2026/05/02 16:38:42 by gaeducas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Command.hpp"
#include "Utils.hpp"
#include "Contact.hpp"

int Command::ft_loop(std::string command)
{
	int i = 0;
	Contact::get_input();
	while (std::cin)
	{
		if (command.substr(0, 3) == "ADD")
			Utils::add_utils();
		else if (command.substr(0, 6) == "SEARCH")
			Utils::search_utils();
		else if (command.substr(0, 4) == "EXIT")
			Utils::exit_utils();
	}
	return (0);
}
