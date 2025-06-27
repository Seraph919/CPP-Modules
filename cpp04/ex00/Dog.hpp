/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:10:16 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/26 14:35:03 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
 
class Dog : public Animal
{
private:

public:
    Dog();
    Dog& operator=(const Dog &other);
    Dog(Dog &other);
    void makeSound() const;
    ~Dog();
};

#endif