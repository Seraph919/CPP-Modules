/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:17:58 by asoudani          #+#    #+#             */
/*   Updated: 2025/11/09 13:17:59 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "data.hpp"

#include <cstdlib>
#include <stdint.h>

class Serializer{
private:
    Serializer();
    Serializer(const Serializer &copy);
    Serializer &operator=(const Serializer &src);
    ~Serializer();
public:
    static uintptr_t   Serializer::serialize(Data *ptr);
    static Data* deserialize(uintptr_t raw);
};

#endif