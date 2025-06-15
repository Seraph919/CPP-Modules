/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:10:08 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/15 17:10:09 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
using namespace std;
class Cat : public Animal
{
private:

public:
    Cat();
    Cat& operator=(const Cat &other);
    Cat(Cat &other);
    void makeSound() const;
    ~Cat();
};

#endif