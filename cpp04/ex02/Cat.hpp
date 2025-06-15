/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:12:09 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/15 17:12:10 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

using namespace std;

class Cat : public Animal
{
private:
    class Brain *brain;
public:
    Cat();
    Cat& operator=(const Cat &other);
    Cat(Cat &other);
    void makeSound() const;
    virtual ~Cat();
};

#endif