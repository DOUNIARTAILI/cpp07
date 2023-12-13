/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drtaili <drtaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:39:25 by drtaili           #+#    #+#             */
/*   Updated: 2023/12/09 13:42:46 by drtaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "Awesome.hpp"

int main() {
    // int intArray[] = {1, 2, 3, 4, 5};
    // double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    // // Using iter to print elements of intArray
    // std::cout << "Printing intArray elements: ";
    // iter(intArray, 5, printElement<int>);
    // std::cout << std::endl;

    // // Using iter to print elements of doubleArray
    // std::cout << "Printing doubleArray elements: ";
    // iter(doubleArray, 5, printElement<double>);
    // std::cout << std::endl;
    int tab[]={0,1,2,3,4};
    Awesome tab2[5];
    iter(tab, 5, print<int>);
    iter(tab2, 5, print<Awesome>);
    return 0;
}