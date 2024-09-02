/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:04:51 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/09/02 15:07:29 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
    
    Data myData;
    myData.value = "Biba Porto";  

    std::cout << "Valor antes de ser serelizado: " << myData.value << std::endl;

    
    uintptr_t serializedData = Serialazer::serialize(&myData);
    std::cout << "Ponteiro serializado: " << serializedData << std::endl;

    
    Data* deserializedData = Serialazer::deserialize(serializedData);
    std::cout << "Valor desserializado: " << deserializedData->value << std::endl;

    
    if (deserializedData == &myData) {
        std::cout << "Ponteiros coincidem. Desserialização bem-sucedida!" << std::endl;
    } else {
        std::cout << "Erro: Os ponteiros não coincidem." << std::endl;
    }

    return 0;
}