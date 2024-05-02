// incluir header 42

#include "../include/iter.hpp"

template <typename T>
void print(const T& value)
{
	std::cout << "Value: " << value << std::endl;
}


int main()
{
	{
		int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		iter(a, 10, print<int>);
		std::cout << std::endl;
	}

	{
		char a[5] = {'a', 'b', 'c'};
		iter(a, 3, print<char>);
		std::cout << std::endl;
	}

	{
		float a[5] = {1.1, 2.2, 3.3, 4.4};
		iter(a, 4, print<float>);
		std::cout << std::endl;
	}

	{
		double a[5] = {1.11111, 2.22222, 3.33333, 4.44444, 5.55555};
		iter(a, 5, print<double>);
		std::cout << std::endl;
	}

	{
		std::string a[5] = {"Paulo", "Viegas"};
		iter(a, 2, print<std::string>);
		std::cout << std::endl;
	}
}