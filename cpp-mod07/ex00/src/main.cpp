// incluir header 42

#include "../include/Template.hpp"

int main()
{
	{
		int a = 1;
		int b = 2;

		std::cout << "a: " << a << "  ,  b: " << b << std::endl;
		std::cout << "    <--->    " << std::endl;

		swap<int>(a, b);

		std::cout << "a: " << a << "  ,  b: " << b << std::endl;

		int result = min(a, b);
		std::cout << "Minimum value: " << result << std::endl;
		result = max(a, b);
		std::cout << "Maximum value: " << result << std::endl;
		std::cout << std::endl;
	}

	{
		char a = 'a';
		char b = 'b';

		std::cout << "a: " << a << "  ,  b: " << b << std::endl;
		std::cout << "    <--->    " << std::endl;

		swap<char>(a, b);

		std::cout << "a: " << a << "  ,  b: " << b << std::endl;

		char result = min(a, b);
		std::cout << "Minimum value: " << result << std::endl;
		result = max(a, b);
		std::cout << "Maximum value: " << result << std::endl;
		std::cout << std::endl;
	}

	{
		float a = 1.09f;
		float b = 9.01f;

		std::cout << "a: " << a << "  ,  b: " << b << std::endl;
		std::cout << "    <--->    " << std::endl;

		swap<float>(a, b);

		std::cout << "a: " << a << "  ,  b: " << b << std::endl;

		float result = min(a, b);
		std::cout << "Minimum value: " << result << std::endl;
		result = max(a, b);
		std::cout << "Maximum value: " << result << std::endl;
		std::cout << std::endl;
	}

	{
		double a = 100.123456789;
		double b = 1.123456789;

		std::cout << "a: " << a << "  ,  b: " << b << std::endl;
		std::cout << "    <--->    " << std::endl;

		swap<double>(a, b);

		std::cout << "a: " << a << "  ,  b: " << b << std::endl;

		double result = min(a, b);
		std::cout << "Minimum value: " << result << std::endl;
		result = max(a, b);
		std::cout << "Maximum value: " << result << std::endl;
		std::cout << std::endl;
	}

	std::cout  << std::endl << "   ***********   Subject's code   ***********   " << std::endl;
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
		return 0;
	}

}