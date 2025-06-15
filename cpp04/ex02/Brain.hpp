/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:12:00 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/15 17:12:01 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

class Brain
{
private:
public:
    string *ideas;
    Brain();
    Brain(Brain &copy);
    Brain &operator=(const Brain &copy);
    virtual ~Brain();
};

#endif