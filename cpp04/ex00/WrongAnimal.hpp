/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:10:29 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/20 19:35:02 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
 

class WrongAnimal
{
private:
    std::string Type;
public:
    WrongAnimal();
    WrongAnimal(std::string _Type);
    WrongAnimal(const WrongAnimal &copy);
    WrongAnimal &operator=(const WrongAnimal &other);
    void setType(std::string _Type);
    std::string getType() const;
    void makeSound() const;
    virtual ~WrongAnimal();
};

#endif