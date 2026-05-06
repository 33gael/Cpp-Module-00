/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeducas <gaeducas@student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 14:04:14 by gaeducas          #+#    #+#             */
/*   Updated: 2026/05/02 23:30:05 by gaeducas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook {
private :
    Contact _contact[8];
    int _oldest_index;

public :
    PhoneBook();
    ~PhoneBook();

};