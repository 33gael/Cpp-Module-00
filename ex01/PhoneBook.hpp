/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeducas <gaeducas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 14:04:14 by gaeducas          #+#    #+#             */
/*   Updated: 2026/05/07 10:31:21 by gaeducas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.hpp"

class PhoneBook {
private:
    Contact _contacts[8];
    int _current_index;
    int _total_contacts;

    std::string _format_column(std::string text) const;

public:
    PhoneBook();
    ~PhoneBook();

    void add_contact();
    void search_contact() const;
};