/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 19:46:34 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/16 17:44:41 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
private :
    std::string name;
public :
    void announce( void );
    void set_name(std::string _name);
    
    Zombie();
    Zombie(std::string _name);
    ~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif