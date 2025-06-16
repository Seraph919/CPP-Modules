/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:30:00 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/15 19:06:45 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

// constructor..
PhoneBook::PhoneBook() : NumberOfContacts(0){
    this->NumberOfContacts = 0;
}


void PhoneBook::AppendFname(std::string line)
{
    static int i = 0;
    if (i == 8)
        i = 0;
    if (this->NumberOfContacts < 8)
        this->NumberOfContacts++;
    this->contacts[i].index = i + 1;
    this->contacts[i].FirstName = line;
    i++;
}

void PhoneBook::AppendNKname(std::string line)
{
    static int i = 0;
    if (i == 8)
        i = 0;
    this->contacts[i].NickName = line;
    i++;
}

void PhoneBook::AppendLname(std::string line)
{
    static int i = 0;
    if (i == 8)
        i = 0;
    this->contacts[i].LastName = line;
    i++;
}

void PhoneBook::AppendNumber(std::string line)
{
    static int i = 0;
    if (i == 8)
        i = 0;
    this->contacts[i].PhoneNumber = line;
    i++;
}

void PhoneBook::AppendSectet(std::string line)
{
    static int i = 0;
    if (i == 8)
        i = 0;
    this->contacts[i].DeepsSecret = line;
    i++;
}

void PhoneBook::search()
{
    class Contact contact;
    std::string line;
    int id;

    std::cout << std::string(10, '-') << " | "
        << std::string(10, '-') << " | "
        << std::string(10, '-') << " | "
        << std::string(10, '-') << std::endl;
    
    std::cout << "  index      first name    last name    nickname"<< std::endl;

    std::cout << std::string(10, '-') << " | "
        << std::string(10, '-') << " | "
        << std::string(10, '-') << " | "
        << std::string(10, '-') << std::endl;

    for (int i = 0; i < this->NumberOfContacts; i++)
    {
        contact = this->contacts[i];
        std::cout << contact.index << std::string(9, ' ') << " | " 
            << completName(contact.FirstName) << spaces(completName(contact.FirstName)) << " | "
            << completName(contact.LastName) << spaces(completName(contact.LastName)) << " | " 
            << completName(contact.NickName) <<std::endl;
    }
    if (this->NumberOfContacts > 0)
    {
        line = get_string("Enter Contact Index: \n> ");
        id = atoi(line.c_str());
        while (id > 8 || id <= 0 || this->NumberOfContacts < id)
        {
            std::cout << "The Intered Index is Not Valid\n";
            line = get_string("Enter Contact Index: \n> ");
            id = atoi(line.c_str());
        }
        PhoneBook::GetContact(id);
    }

}

// ! ig there is an error in indexing after add

void PhoneBook::add()
{
    std::string line;
    
    line = get_string("Enter The First Name: ");
    AppendFname(line);

    line = get_string("Enter The Last Name: ");
    AppendLname(line);

    line = get_string("Enter The Nickname: ");
    AppendNKname(line);

    line = get_string("Enter Phone Number: ");
    AppendNumber(line);

    line = get_string("Enter Deepest Secret: ");
    AppendSectet(line);
    
}

void PhoneBook::GetContact(int id)
{
    class Contact contact;

    contact = this->contacts[id - 1];
    std::cout << "First Name : " << contact.FirstName <<'\n' 
    << "Last Name : " << contact.LastName << '\n' 
    << "NickName : " << contact.NickName << '\n'
    << "Phone Number : " << contact.PhoneNumber << '\n'
    << "Deepest Secret : " << contact.DeepsSecret << std::endl;
}

void PhoneBook::exit()
{
    std::cout << "Exiting...\n";
    std::cout << "Thanks For Your Time!\n";
}

// distructor..
PhoneBook::~PhoneBook(){
    /*
        wach again!
    */
}
