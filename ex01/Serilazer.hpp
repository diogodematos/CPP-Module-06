/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serilazer.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:01:39 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/28 16:21:22 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALAZE_H
# define SERIALAZE_H

#include <iostream>
#include <cstdint>
#include "Data.h"

class Serialaze
{
    private:

        Serialaze();
        Serialaze(const Serialaze &copy);
        Serialaze &operator=(const Serialaze &serialaze);
        ~Serialaze();

    public:

        uintptr_t serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);
};


#endif

