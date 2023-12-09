/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drtaili <drtaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:19:36 by drtaili           #+#    #+#             */
/*   Updated: 2023/12/09 13:35:53 by drtaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main() {
    int int1 = 5, int2 = 10;
    double double1 = 3.14, double2 = 6.28;
    char char1 = 'a', char2 = 'd';

    std::cout << "Before swapping:" << std::endl;
    std::cout << "int1 = " << int1 << ", int2 = " << int2 << std::endl;
    std::cout << "double1 = " << double1 << ", double2 = " << double2 << std::endl;

    swap(int1, int2);
    swap(double1, double2);
    swap(char1, char2);

    std::cout << "\nAfter swapping:" << std::endl;
    std::cout << "int1 = " << int1 << ", int2 = " << int2 << std::endl;
    std::cout << "double1 = " << double1 << ", double2 = " << double2 << std::endl;
    
    std::cout << "max : " <<  max(int1, int2) << std::endl;
    std::cout << "max : " <<  max(double1, double2) << std::endl;
    std::cout << "max : " <<  max(char1, char2) << std::endl;
    
    std::cout << "min : " <<  min(int1, int2) << std::endl;
    std::cout << "min : " <<  min(double1, double2) << std::endl;
    std::cout << "min : " <<  min(char1, char2) << std::endl;
    return 0;
}
