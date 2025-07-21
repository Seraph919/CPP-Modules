/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:11:12 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/20 19:44:53 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

class Brain
{
public:
    std::string ideas[100];
    Brain();
    Brain(const Brain &copy);
    Brain &operator=(const Brain &copy);
    virtual ~Brain();
};

#endif