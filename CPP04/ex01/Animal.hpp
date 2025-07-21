/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:10:47 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/20 19:44:15 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
 

class Animal
{
protected:
   std::string Type;
public:
    Animal();
    Animal(std::string _Type);
    Animal(const Animal &copy);
    Animal &operator=(const Animal &other);
    void setType(std::string _Type);
   std::string getType() const;
    virtual void makeSound() const;
    virtual ~Animal();
};

#endif