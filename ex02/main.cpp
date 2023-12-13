/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drtaili <drtaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:05:19 by drtaili           #+#    #+#             */
/*   Updated: 2023/12/11 15:00:23 by drtaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


int main() {
    try {
        Array<int> intArray(10);
        Array<double> doubleArray(5);

        intArray[0] = 42;
        doubleArray[2] = 3.14;

        std::cout << "Size of intArray: " << intArray.size() << std::endl;
        std::cout << "Size of doubleArray: " << doubleArray.size() << std::endl;

        Array<int> copiedIntArray(intArray);

        Array<double> assignedDoubleArray = doubleArray;

        std::cout << "Element at index 0 in intArray: " << intArray[0] << std::endl;
        std::cout << "Element at index 1 in intArray: " << intArray[1] << std::endl;
        std::cout << "Element at index 2 in doubleArray: " << doubleArray[2] << std::endl;
        std::cout << "Element at index 3 in doubleArray: " << doubleArray[3] << std::endl;

        // std::cout << "Element at index 10 in intArray: " << intArray[10] << std::endl;
        Array<std::string> str1 = Array<std::string>();
        Array<std::string> str2 = Array<std::string>(3);
        str2[0] = "i";
        str2[1] = "love";
        str2[2] = "you";
        for (int i = 0; i < 3; i++){
            std::cout << str2[i] << " ";
        }
        std::cout << std::endl;
        str1 = str2;
        for (int i = 0; i < 3; i++){
            std::cout << str1[i] << " ";
        }
        std::cout << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
