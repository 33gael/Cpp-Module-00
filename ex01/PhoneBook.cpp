/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeducas <gaeducas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 14:04:11 by gaeducas          #+#    #+#             */
/*   Updated: 2026/05/07 11:06:55 by gaeducas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() {
    this->_current_index = 0;
    this->_total_contacts = 0;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::add_contact() {
    this->_contacts[this->_current_index].init_contact();
    this->_current_index++;
    if (this->_current_index == 8)
        this->_current_index = 0;
    if (this->_total_contacts < 8)
        this->_total_contacts++;
}

std::string PhoneBook::_format_column(std::string text) const {
    if (text.length() > 10)
        return text.substr(0, 9) + ".";
    return text;
}

void PhoneBook::search_contact() const {
    std::cout << std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First name" << "|"
				<< std::setw(10) << "Last name" << "|"
				<< std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < this->_total_contacts; i++) {
        std::cout << std::setw(10) << i << "|"
					<< std::setw(10) << this->_format_column(this->_contacts[i].get_first_name()) << "|"
					<< std::setw(10) << this->_format_column(this->_contacts[i].get_last_name()) << "|"
					<< std::setw(10) << this->_format_column(this->_contacts[i].get_nick_name()) << std::endl;
    }

    std::string input;
    std::cout << "Index to display: ";
    if (!std::getline(std::cin, input))
        return;

    if (input.length() == 1 && input[0] >= '0' && input[0] < '0' + this->_total_contacts) {
        int index = input[0] - '0';
        std::cout << "First name: " << this->_contacts[index].get_first_name() << std::endl;
        std::cout << "Last name: " << this->_contacts[index].get_last_name() << std::endl;
        std::cout << "Nickname: " << this->_contacts[index].get_nick_name() << std::endl;
        std::cout << "Phone number: " << this->_contacts[index].get_phone_number() << std::endl;
        std::cout << "Darkest secret: " << this->_contacts[index].get_darkest_secret() << std::endl;
    } else {
        std::cout << "Error: Invalid index." << std::endl;
    }
}