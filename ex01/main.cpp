/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:04:51 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/29 15:15:47 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
    // Criar uma instância de Data
    Data myData;
    myData.value = "Biba Porto";  // Atribuindo um valor à estrutura

    std::cout << "Valor antes de ser serelizado: " << myData.value << std::endl;

    // Serializar o ponteiro para Data
    uintptr_t serializedData = Serialazer::serialize(&myData);
    std::cout << "Ponteiro serializado: " << serializedData << std::endl;

    // Desserializar o uintptr_t de volta para um ponteiro Data*
    Data* deserializedData = Serialazer::deserialize(serializedData);
    std::cout << "Valor desserializado: " << deserializedData->value << std::endl;

    // Verificar se o ponteiro desserializado é o mesmo que o original
    if (deserializedData == &myData) {
        std::cout << "Ponteiros coincidem. Desserialização bem-sucedida!" << std::endl;
    } else {
        std::cout << "Erro: Os ponteiros não coincidem." << std::endl;
    }

    return 0;
}