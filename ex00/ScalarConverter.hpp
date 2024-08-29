/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:15:47 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/29 12:28:15 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

#include <string>
#include <iostream>
#include <sstream>
//#include <stdlib.h>
#include <cstdlib>
#include <cstring>
#include <iomanip>

class ScalarConverter
{
    private:
        
        ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter &operator=(const ScalarConverter &converter);
        ~ScalarConverter();

    public:
    
      static void Converter(std::string conv);
      
      class ErrorInput : public std::exception
        {
            public:

                const char* what() const throw();
        };
        
};

#endif