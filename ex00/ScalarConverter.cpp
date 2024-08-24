/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:33:16 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/24 16:16:30 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "Default Constructor Created" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
    (void)copy;
    std::cout << "Copy Constructor Created" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &converter)
{
    std::cout << "Copy Operator Called" << std::endl;
    (void)&converter;
    return *this;
}

ScalarConverter::~ScalarConverter()
{}

const char* ScalarConverter::ErrorInput::what() const throw()
{
    return "Wrong Input!";
}

char ScalarConverter::ConvChar(int i)
{
    char c;
    c = static_cast<char>(i);
    return c;
}

int countDigits(int number) {
    int count = 0;
    if (number == 0) {
        return 1;
    }
    if (number < 0) {
        number = -number;
    }
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

void CheckInput(std::string conv)
{
    int c;
    std::istringstream iss(conv);
    iss >> c;
    int d = countDigits(c);
    std::size_t convsize = conv.size();
    if (d != static_cast<int>(convsize))
    {
        throw ErrorInput();
    }
    return ;
}

void ScalarConverter::Converter(const std::string conv)
{
    try
    {
        CheckInput(conv);
        int c;
        std::istringstream iss(conv);
        iss >> c;
        std::cout << c << std::endl;
        char a = ConvChar(c);
        std::cout << a << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}