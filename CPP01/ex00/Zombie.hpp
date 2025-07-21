/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 19:46:34 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/03 18:38:52 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
private :
    std::string name;
public :
    Zombie();
    Zombie(std::string _name);
    void announce( void );
    void set_name(std::string _name);
    ~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif