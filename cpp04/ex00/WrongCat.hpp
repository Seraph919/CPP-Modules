/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:10:37 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/15 17:10:38 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"
using namespace std;
class WrongCat : public WrongAnimal
{
private:

public:
    WrongCat();
    WrongCat& operator=(const WrongCat &other);
    WrongCat(WrongCat &other);
    void makeSound() const;
    ~WrongCat();
};

#endif