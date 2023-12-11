/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drtaili <drtaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:02:48 by drtaili           #+#    #+#             */
/*   Updated: 2023/12/11 14:18:12 by drtaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "iostream"
template<typename T>

class Array{
public:
    Array<T>(void) : _content(NULL), len_array(0){
    }
    Array<T>(unsigned int n){
        _content = new T(n);
        int i = 0;
        while (i < n){
            _content[i] = 0;
            i++;
        }
        len_array = n;
    }
    Array<T>(Array<T> const & array){
        std::cout << "copy constructor called" << std::endl;
        this->_content = new T[array.len_array];
        this->len_array = array.len_array;
        for (int i = 0; i < array.len_array; i++) {
            _content[i] = array._content[i];
        }
    }
    Array<T> const &operator=(Array<T> const & array){
        if (this != &array){
            delete[] _content;
            this->len_array = array.len_array;
            T *_content = new T[len_array];
            for (int i = 0; i < len_array; i++) {
                _content[i] = array._content[i];
            }
        }
        return *this;
    }
    ~Array<T>(void){
        delete[] _content;
    }
    int size() const{
        return len_array;
    }
    T& operator[](unsigned int index) {
        if (index >= len_array) {
            throw std::out_of_range("Index out of bounds");
        }
        return _content[index];
    }

    const T& operator[](unsigned int index) const {
        if (index >= len_array) {
            throw std::out_of_range("Index out of bounds");
        }
        return _content[index];
    }
private:
	T * _content;
    int len_array;
};

#endif