/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:12:17 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/20 22:02:05 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

 

class Dog : public Animal
{
private:
    class Brain *brain;
public:
    Dog();
    Dog& operator=(const Dog &other);
    Dog(const Dog &other);
    void makeSound() const;
    virtual ~Dog();
};

#endif