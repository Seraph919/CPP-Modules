/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:11:29 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/20 19:44:02 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

 

class Cat : public Animal
{
private:
    class Brain *brain;
public:
    Cat();
    Cat& operator=(const Cat &other);
    Cat(const Cat &other);
    void makeSound() const;
    virtual ~Cat();
};

#endif