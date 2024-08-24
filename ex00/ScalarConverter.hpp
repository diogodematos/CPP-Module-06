/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:15:47 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/24 16:13:13 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

#include <string>
#include <iostream>
#include <sstream>

class ScalarConverter
{
    private:
        
        ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter &operator=(const ScalarConverter &converter);
        ~ScalarConverter();
        
        static char ConvChar(int c);

        class ErrorInput : public std::exception
        {
            public:

                const char* what() const throw();
        };

    public:
    
      static void Converter(const std::string conv);
        
};

#endif