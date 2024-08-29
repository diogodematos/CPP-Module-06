/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:51:09 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/29 17:09:22 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(){}

Base *generate(void)
{
    Base *Teste = NULL;
    int r = rand() % 3;
    switch(r)
    {
        case 0:
            Teste = new A();
            break;
        case 1:
            Teste = new B();
            break;
        case 2:
            Teste = new C();
            break;
        // default:
        //     std::cout << "Something was worng" << std::endl;
        //     break;
    }
    return Teste;     
}