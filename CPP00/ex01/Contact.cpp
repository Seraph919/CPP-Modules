/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:31:59 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/02 19:12:50 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){}

void Contact::setIndex(int Index)
{
    index = Index;   
}

const int &Contact::getIndex()
{
    return index;    
}


void Contact::setFname(std::string firstName)
{
    FirstName = firstName;    
}

const std::string &Contact::getFname()
{
    return FirstName;    
}


void Contact::setLname(std::string Lname)
{
    LastName = Lname;
}

const std::string &Contact::getLname()
{
    return LastName;   
}


void Contact::setNname(std::string Nname)
{
    NickName = Nname;    
}

const std::string &Contact::getNname()
{
    return NickName;   
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
    PhoneNumber = phoneNumber;    
}

const std::string &Contact::getPhoneNumber()
{
    return PhoneNumber;   
}

void Contact::setDeepsSecret(std::string deepsSecret)
{
    DeepsSecret = deepsSecret;    
}

const std::string &Contact::getDeepsSecret()
{
    return DeepsSecret;
}

Contact::~Contact(){}