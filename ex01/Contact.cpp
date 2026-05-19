/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeducas <gaeducas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 14:39:54 by gaeducas          #+#    #+#             */
/*   Updated: 2026/05/19 10:30:45 by gaeducas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

std::string Contact::_get_valid_input(std::string prompt) const {
    std::string input;

    while (std::cin) {
        std::cout << prompt;
        std::getline(std::cin, input);
        
        if (!input.empty()) {
            return input;
        }
        if (std::cin.good()) {
            std::cout << "Error: field cannot be empty." << std::endl;
        }
    }
    return "";
}

void Contact::init_contact() {
    this->_first_name = this->_get_valid_input("First name: ");
    this->_last_name = this->_get_valid_input("Last name: ");
    this->_nick_name = this->_get_valid_input("Nickname: ");
    this->_phone_number = this->_get_valid_input("Phone number: ");
    this->_darkest_secret = this->_get_valid_input("Darkest secret: ");
}

std::string Contact::get_first_name() const {return this->_first_name;}
std::string Contact::get_last_name() const {return this->_last_name;}
std::string Contact::get_nick_name() const {return this->_nick_name;}
std::string Contact::get_phone_number() const {return this->_phone_number;}
std::string Contact::get_darkest_secret() const {return this->_darkest_secret;}