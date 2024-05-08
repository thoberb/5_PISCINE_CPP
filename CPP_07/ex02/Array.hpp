/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 19:29:23 by blandineber       #+#    #+#             */
/*   Updated: 2024/04/25 16:21:54 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>

template <typename T>
class Array
{
	public:
		Array() : _array(NULL), _size(0) {}

		Array(unsigned int n) : _array(new T[n]()), _size(n) {}

		Array(const Array &src) : _array(NULL), _size(src._size) {
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; ++i) {
				_array[i] = src._array[i];
			}
		}

		~Array() { delete[] _array; }

		Array &operator=(const Array &rhs) {
			if (this != &rhs) {
				delete[] _array;
				_size = rhs._size;
				_array = new T[_size];
				for (unsigned int i = 0; i < _size; ++i) {
					_array[i] = rhs._array[i];
				}
			}
			return *this;
		}

		T &operator[](unsigned int index) {
			if (index >= _size) {
				throw std::out_of_range("Index out of bounds");
			}
			return _array[index];
		}

		unsigned int size() const { return _size; }

	private:
		T *_array;
		unsigned int _size;
};

#endif

