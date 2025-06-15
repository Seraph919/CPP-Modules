/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:11:51 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/15 17:11:52 by asoudani         ###   ########.fr       */
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
    // * by adding = 0 in the end, we made it a pute virtual function.
    // * which makes the class abstuct..
    virtual void makeSound() const = 0;
    virtual ~Animal();
};

#endif 