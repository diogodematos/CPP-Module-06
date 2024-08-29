/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:28:28 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/29 17:08:42 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
# define BASE_H

#include <string>
#include <iostream>
#include <cstdlib>

class Base
{
    public:

        virtual ~Base();
};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

#endif