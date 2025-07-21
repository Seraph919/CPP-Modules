/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:10:37 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/20 19:35:07 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
 
class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat& operator=(const WrongCat &other);
    WrongCat(const WrongCat &other);
    void makeSound() const;
    ~WrongCat();
};

#endif