/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drtaili <drtaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:39:28 by drtaili           #+#    #+#             */
/*   Updated: 2023/12/09 13:42:02 by drtaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T, typename Func>
void iter(T* array, size_t length, Func function) {
    for (size_t i = 0; i < length; ++i) {
        // Call the provided function on each element of the array
        function(array[i]);
    }
}

// Example function to print an element
template <typename T>
void printElement(const T& element) {
    std::cout << element << " ";
}
