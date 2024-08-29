/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:28:36 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/29 15:05:05 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serialazer::Serialazer(){}

Serialazer::Serialazer(const Serialazer &copy){
    (void)copy;
}

Serialazer &Serialazer::operator=(const Serialazer &serial){
    (void)serial;
    return *this;
}

Serialazer::~Serialazer(){}

uintptr_t Serialazer::serialize(Data *pnt)
{
    return reinterpret_cast<uintptr_t>(pnt);
}

Data *Serialazer::deserialize(uintptr_t value)
{
    return reinterpret_cast<Data*>(value);
}