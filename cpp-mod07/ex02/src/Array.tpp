// incluir header 42

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include <cstddef> // size_t and NULL
#include "../include/Array.hpp"

// Default Constructor
template <typename T>
Array<T>::Array() : _array(NULL), _size(0) {}

// Parameterized Constructor
template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]()), _size(n) {}

// Copy Constructor
template <typename T>
Array<T>::Array(const Array &other) : _array(NULL), _size(0)
{
	*this = other;
}

// Copy assignment operator
template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
		if (this->_array)
			delete []this->_array;

		this->_size = other._size;
		this->_array = new T[this->_size];
		for (size_t i = 0 ; i < this->_size ; i++)
			this->_array[i] = other._array[i];
	}
	return(*this);
}

// Destructor
template <typename T>
Array<T>::~Array(void)
{
	delete [] _array;
}

// Index access operator
template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= this->_size)
		throw Array::OutOfBoundsException();
	return (this->_array[index]);
}

// getter
template <typename T>
unsigned int Array<T>::size() const 
{
	return (this->_size);
}

# endif