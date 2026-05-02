/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeducas <gaeducas@student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 16:50:31 by gaeducas          #+#    #+#             */
/*   Updated: 2026/05/02 17:28:30 by gaeducas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"
#include "Contact.hpp"

int Utils::add_utils() {
    int i = 0;
    while (i <= 4)
    {
        if (i == 0)
        {
            std::cout << "first name : " << std::endl;
            Contact::get_input();
            i++;
        }
        else if (i == 1)
        {
            std::cout << "last name : " << std::endl;
            Contact::get_input();
            i++;
        }
        else if (i == 2)
        {
            std::cout << "nickname : " << std::endl;
            Contact::get_input();
            i++;
        }
        else if (i == 3)
        {
            std::cout << "phone number : " << std::endl;
            Contact::get_input();
            i++;
        }
        else if (i == 4)
        {
            std::cout << "darkest secret : " << std::endl;
            Contact::get_input();
            i++;
        }
    }
    return (0);
}

int Utils::search_utils() {
    std::cout << "Search";
    return (0);
}

int Utils::exit_utils() {
    std::cout << "Exit";
    return (0);
}