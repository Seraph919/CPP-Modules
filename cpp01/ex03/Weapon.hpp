/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 09:22:10 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/04 08:48:35 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP


#include <iostream>

class Weapon {
private:
    std::string type;
public:
    Weapon(std::string);
    const std::string &getType();
    void setType(std::string new_type);
    ~Weapon();
};

#endif