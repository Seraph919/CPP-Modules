/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Unequiped.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 04:13:54 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/21 06:33:12 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNEQUIPED_HPP
#define UNEQUIPED_HPP

#include "AMateria.hpp"

struct materias_t
{
    AMateria *ptr;
    materias_t *next;
};

void addMateria(materias_t **head, AMateria *m);
void deleteMaterias(materias_t **head);

#endif