/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:10:29 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/15 17:10:30 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
using namespace std;

class WrongAnimal
{
private:
    string Type;
public:
    WrongAnimal();
    WrongAnimal(string _Type);
    WrongAnimal(WrongAnimal &copy);
    WrongAnimal &operator=(const WrongAnimal &other);
    void setType(string _Type);
    string getType() const;
    void makeSound() const;
    ~WrongAnimal();
};

#endif