/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeducas <gaeducas@student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 14:36:11 by gaeducas          #+#    #+#             */
/*   Updated: 2026/05/02 15:13:16 by gaeducas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Contact {
private :
    std::string _first_name;
    std::string _last_name;
    std::string _nick_name;
    std::string _number;
    std::string _secret;

public :
    static int get_input();

};