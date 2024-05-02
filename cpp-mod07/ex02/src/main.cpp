// incluir header 42

#include "../include/Array.hpp"

#include <iostream>

int main()
{
	{

		try
		{
			Array<int> a(5); // array with 5 elements
			a[0] = 10;
			a[1] = 20;

			for (int i = 0; i < static_cast<int>(a.size()); i++)
				std::cout << "a[" << i << "]: " << a[i] << std::endl;

			std::cout << "a Array size: " << a.size() << std::endl;
			std::cout << std::endl;

			Array<int> b(a); // copy constructor
			b[2] = 100;
			b[3] = 200;

			for(int i = 0; i < static_cast<int>(b.size()); i++)
				std::cout << "b[" << i << "]: " << b[i] << " from a[" << i << "]: " << a[i] << std::endl;

			std::cout << "b Array size: " << b.size() << std::endl;
			std::cout << std::endl;

			Array<int> c; // default constructor (empty array)
			std::cout << "c Array size: " << c.size() << std::endl;
			
			c = a; // assignment operator
			for (int i = 0; i < static_cast<int>(a.size()); i++)
				std::cout << "c[" << i << "]: " << c[i] << " = a[" << i << "]: " << a[i] << std::endl;
			std::cout << "c Array size: " << c.size() << std::endl;
			std::cout << std::endl;

			// Out-of-bounds check
			std::cout << "Accessing out-of-bounds..." << std::endl;
			std::cout << a[10] << std::endl; // This should throw an exception
		}
		catch (const std::exception& e)
		{
			std::cerr << "Exception caught: " << e.what() << std::endl;
		}
	}

	{

		try
		{
			Array<float> a(5); // array with 5 elements
			a[0] = 10.1f;
			a[1] = 20.2f;

			for (int i = 0; i < static_cast<int>(a.size()); i++)
				std::cout << "a[" << i << "]: " << a[i] << std::endl;

			std::cout << "a Array size: " << a.size() << std::endl;
			std::cout << std::endl;
			Array<float> b(a); // copy constructor
			b[2] = 100.101f;
			b[3] = 200.202f;

			for(int i = 0; i < static_cast<int>(b.size()); i++)
				std::cout << "b[" << i << "]: " << b[i] << " from a[" << i << "]: " << a[i] << std::endl;

			std::cout << "b Array size: " << b.size() << std::endl;
			std::cout << std::endl;

			Array<float> c; // default constructor (empty array)
			std::cout << "c Array size: " << c.size() << std::endl;
			
			c = a; // assignment operator
			for (int i = 0; i < static_cast<int>(a.size()); i++)
				std::cout << "c[" << i << "]: " << c[i] << " = a[" << i << "]: " << a[i] << std::endl;
			std::cout << "c Array size: " << c.size() << std::endl;
			std::cout << std::endl;

			// Out-of-bounds check
			std::cout << "Accessing out-of-bounds..." << std::endl;
			std::cout << b[10] << std::endl; // This should throw an exception
		}
		catch (const std::exception& e)
		{
			std::cerr << "Exception caught: " << e.what() << std::endl;
		}
	}

	return (0);
}