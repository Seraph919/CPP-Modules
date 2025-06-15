/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:18:52 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/02 17:19:54 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPERS_HPP
#define HELPERS_HPP

#include "phonebook.hpp"
#include "contact.hpp"

std::string get_string(std::string prompt);
std::string completName(std::string line);
std::string spaces(std::string line);


#endif