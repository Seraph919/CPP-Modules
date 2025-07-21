/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:10:08 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/20 19:34:52 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
 
class Cat : public Animal
{
public:
    Cat();
    Cat& operator=(const Cat &other);
    Cat(const Cat &other);
    void makeSound() const;
    ~Cat();
};

#endif