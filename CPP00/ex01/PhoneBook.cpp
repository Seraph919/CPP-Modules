/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:30:00 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/02 19:11:46 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


PhoneBook::PhoneBook() : NumberOfContacts(0){}

void PhoneBook::AppendFname(std::string line)
{
    static int i = 0;
    if (i == 8)
        i = 0;
    if (this->NumberOfContacts < 8)
        this->NumberOfContacts++;
    this->contacts[i].setIndex(i + 1);
    this->contacts[i].setFname(line);
    i++;
}

void PhoneBook::AppendNKname(std::string line)
{
    static int i = 0;
    if (i == 8)
        i = 0;
    this->contacts[i].setNname(line);
    i++;
}

void PhoneBook::AppendLname(std::string line)
{
    static int i = 0;
    if (i == 8)
        i = 0;
    this->contacts[i].setLname(line);
    i++;
}

void PhoneBook::AppendNumber(std::string line)
{
    static int i = 0;
    if (i == 8)
        i = 0;
    this->contacts[i].setPhoneNumber(line);
    i++;
}

void PhoneBook::AppendSectet(std::string line)
{
    static int i = 0;
    if (i == 8)
        i = 0;
    this->contacts[i].setDeepsSecret(line);
    i++;
}

void PhoneBook::search()
{
    class Contact contact;
    std::string line;
    int id = -1;

    std::cout << "\n" << std::string(10, '-') << " | "
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
        std::cout << contact.getIndex() << std::string(9, ' ') << " | " 
            << completName(contact.getFname()) << spaces(completName(contact.getFname())) << " | "
            << completName(contact.getLname()) << spaces(completName(contact.getLname())) << " | " 
            << completName(contact.getNname()) <<std::endl;
    }
    std::cout << std::endl;
    if (this->NumberOfContacts > 0)
    {
        bool first = true;
        while (1)
        {
            if (first)
               std::cout << "Search Table:\n", first = false; 
            std::cin >> id;
            if (std::cin.eof())
            {
                std::cin.clear();
                break;
            }
            if (std::cin.fail())
            {
                std::cin.clear();
                id = -1;
                char c;
                while (std::cin.get(c) && c != '\n');
            }
            if (id < 0 || id > 8 || id > NumberOfContacts)
                std::cout << "Please enter a valid index\n";
            else
                break;
                // std::cout << "inside\n";
        }
        if (id != -1)
            return PhoneBook::GetContact(id);
    }
    std::cout << "returning to Main Menu..\n";
}

void PhoneBook::add()
{
    std::string line;
    
    line = getString("Enter The First Name: ");
    AppendFname(line);
    if (line != "")
        line = getString("Enter The Last Name: ");
    AppendLname(line);
    if (line != "")
        line = getString("Enter The Nickname: ");
    AppendNKname(line);
    if (line != "")
        line = getString("Enter Phone Number: ");
    AppendNumber(line);
    if (line != "")
        line = getString("Enter Deepest Secret: ");
    AppendSectet(line);
    
}

void PhoneBook::GetContact(int id)
{
    class Contact contact;

    contact = this->contacts[id - 1];
    std::cout << "First Name : " << contact.getFname() <<'\n' 
    << "Last Name : " << contact.getLname() << '\n' 
    << "NickName : " << contact.getNname() << '\n'
    << "Phone Number : " << contact.getPhoneNumber() << '\n'
    << "Deepest Secret : " << contact.getDeepsSecret() << std::endl;
}

void PhoneBook::exit()
{
    std::cout << "\nExiting...\n";
    std::cout << "Thanks For Your Time!\n";
}

// distructor..
PhoneBook::~PhoneBook(){}
