// incluir header 42

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &other);
		Array &operator=(const Array &other);
		~Array();
		
		T &operator[](unsigned int i);

		unsigned int size() const;

		// Exception Classes
		class OutOfBoundsException: public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Index out of bounds !!!\n");
				}
		};

	private:
		T* _array;
		unsigned int _size;
};

#include "../src/Array.tpp" // must be included in the end of the header file

#endif