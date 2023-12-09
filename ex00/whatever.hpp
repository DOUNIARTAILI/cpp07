/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drtaili <drtaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:19:39 by drtaili           #+#    #+#             */
/*   Updated: 2023/12/09 13:31:24 by drtaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T> // tell the compiler that we're writing a template
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template<typename T> 
T const & max(T const & a, T const & b) {
	return (a > b? a : b);
}

template<typename T> 
T const & min(T const & a, T const & b) {
	return (a < b? a : b);
}