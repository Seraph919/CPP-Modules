/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:30:04 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/02 06:20:00 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#include "helpers.hpp"

#define ERROR 1

class PhoneBook
{
private:
    Contact contacts[8];
public:
    PhoneBook();
    int NumberOfContacts;
    void search();
    void add();
    void exit();
    void AppendFname(std::string line);
    void AppendLname(std::string line);
    void AppendNumber(std::string line);
    void AppendNKname(std::string line);
    void AppendSectet(std::string line);
    void GetContact(int id);
    ~PhoneBook();
};


#endif