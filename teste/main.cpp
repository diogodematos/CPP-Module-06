/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:45:49 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/27 12:03:50 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    (void)argc;
    double  tes;
    char *  te;

    tes = strtod(argv[1], &te);
    std::cout << "Size of te: " << (unsigned)strlen(te) << std::endl;
    if ((unsigned)strlen(te) == 0)
        te = NULL;
    std::cout << "Double value is: " << tes << std::endl;
    std::cout << "Extra value is: " << te << std::endl;
    return (0);
}