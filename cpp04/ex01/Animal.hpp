/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:10:47 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/15 17:10:48 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
using namespace std;

class Animal
{
private:
    string Type;
public:
    Animal();
    Animal(string _Type);
    Animal(Animal &copy);
    Animal &operator=(const Animal &other);
    void setType(string _Type);
    string getType() const;
    virtual void makeSound() const;
    virtual ~Animal();
};

#endif