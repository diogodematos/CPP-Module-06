/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:01:39 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/29 14:13:26 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
# define SERIALIZER_H

#include <iostream>
#include <stdint.h>
#include "Data.h"

class Serialazer
{
    private:

        Serialazer();
        Serialazer(const Serialazer &copy);
        Serialazer &operator=(const Serialazer &serialaze);
        ~Serialazer();

    public:

        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};


#endif

