/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Unequiped.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 04:13:54 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/28 04:24:57 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

typedef struct materias
{
    AMateria *ptr;
    struct materias *next;
} materias_t;


class Unequipped
{
private:
    static materias_t *materias;
public:
    Unequipped()
    {
        materias->ptr = NULL;
        materias->next = NULL;
    }
    void add_materia(AMateria *m)
    {
        materias_t *ptr = materias;
        while (ptr->next != NULL)
            ptr = ptr->next;
        materias->ptr = m;
        materias->next = NULL;
    }
    ~Unequipped()
    {
        materias_t *ptr;
        while (materias->ptr != NULL)
        {
            ptr = materias->next;
            delete materias->ptr;
            materias = ptr;
        }
    }
};