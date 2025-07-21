/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:11:08 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/20 22:06:44 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called\n";
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor called\n";
    *this = copy;
}

Brain &Brain::operator=(const Brain &copy)
{
    if (this != &copy)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = copy.ideas[i];
        std::cout << "Brain assignment operator called\n";
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called\n";
}
