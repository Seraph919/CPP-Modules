/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:29:48 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/02 19:12:21 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact{
private:
    int index;
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DeepsSecret;
public:
    Contact();
    void setIndex(int Index);
    const int &getIndex();
    
    void setFname(std::string firstName);
    const std::string &getFname();

    void setLname(std::string Lname);
    const std::string &getLname();
    
    void setNname(std::string Nname);
    const std::string &getNname();

    void setPhoneNumber(std::string phoneNumber);
    const std::string &getPhoneNumber();
    
    void setDeepsSecret(std::string deepsSecret);
    const std::string &getDeepsSecret();
    ~Contact();
};

#endif