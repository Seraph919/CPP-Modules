/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Unequiped.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 06:22:54 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/21 17:57:09 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Unequiped.hpp"


void addMateria(materias_t **head, AMateria *m)
{
    if (!head || !m)
        return;
    materias_t *newNode = new materias_t;
    newNode->ptr = m;
    newNode->next = *head;
    *head = newNode;
}

void deleteMaterias(materias_t **head)
{
    if (!head || !*head)
        return;
    materias_t *current = *head;
    while (current)
    {
        materias_t *nextNode = current->next;
        delete current->ptr;
        delete current;
        current = nextNode;
    }
    *head = NULL;
}