/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:30:04 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/02 17:30:05 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "contact.hpp"
#include "helpers.hpp"
#define ERROR 1
#define HASH_EXIT1 442
#define HASH_EXIT2 314
#define HASH_SEARCH1 438
#define HASH_SEARCH2 630
#define HASH_ADD1 297
#define HASH_ADD2 201




class PhoneBook
{
public:
    PhoneBook();
    Contact contacts[8];
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