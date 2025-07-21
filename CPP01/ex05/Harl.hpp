/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 09:24:11 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/05 10:02:38 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

#define DEBUG 0
#define INFO 1
#define WARNING 2
#define ERROR 3

class Harl{
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
public:
    void complain( std::string level );
};

#endif