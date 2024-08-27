/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:33:16 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/27 16:45:08 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    //std::cout << "Default Constructor Created" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
    (void)copy;
    //std::cout << "Copy Constructor Created" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &converter)
{
    //std::cout << "Copy Operator Called" << std::endl;
    (void)&converter;
    return *this;
}

ScalarConverter::~ScalarConverter()
{}

const char* ScalarConverter::ErrorInput::what() const throw()
{
    return "Wrong Input!";
}

void CheckInput(std::string conv)
{
    double d;
    char *res;
    const char *co = conv.c_str();
    d = strtod(co, &res);
    if ((unsigned)strlen(res) > 1 || ((unsigned)strlen(res) == 1 && res[0] != 'f'))
    {
        throw ScalarConverter::ErrorInput(); 
    }
    else if (d == 0 && (unsigned)strlen(res) == 1)
    {
        std::cout << "char: " << static_cast<char>(res[0]) << std::endl; 
        std::cout << "int: " << static_cast<int>(res[0]) << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(res[0]) << std::endl;
        std::cout << "float: " << static_cast<float>(res[0]) << 'f' << std::endl;
    }
    else if (d < 32 && (unsigned)strlen(res) == 0)
    {
        std::cout << "char: " << static_cast<char>(res[0]) << std::endl; 
        std::cout << "int: " << static_cast<int>(res[0]) << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(res[0]) << std::endl;
        std::cout << "float: " << static_cast<float>(res[0]) << 'f' << std::endl;
    }
    else
    {
    std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
    std::cout << "float: " << static_cast<float>(d) << 'f' << std::endl;
    std::cout << "int: " << static_cast<int>(d) << std::endl;
    std::cout << "char: " << static_cast<char>(d) << std::endl;
    }
    
    
}

void ScalarConverter::Converter(std::string conv)
{
    try
    {
        CheckInput(conv);
    }
    catch(const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}