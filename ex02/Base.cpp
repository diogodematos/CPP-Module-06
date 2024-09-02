/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:51:09 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/09/02 15:05:03 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(){}

Base *generate(void)
{
    
    srand(static_cast<unsigned int>(time(0)));
    Base *Teste = NULL;
    int r = rand() % 3;
    switch(r)
    {
        case 0:
            std::cout << "Generate A" << std::endl;
            return Teste = new A();
        case 1:
            std::cout << "Generate B" << std::endl;
            return Teste = new B();
        case 2:
            std::cout << "Generate C" << std::endl;
            return Teste = new C();
        default:
            return NULL;
    }
    return NULL;     
}

void identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cerr << "Cast Failed" << std::endl;
}

void identify(Base &p)
{
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    } catch (std::exception &e) {}

    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    } catch (std::exception &e) {}

    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
    } catch (std::exception &e) {}

    std::cerr << "Unknown Type" << std::endl;
}