#include "vector.h"
#include <iostream>

void print_vector(const Vector<string> vector)
{
	for (auto& s: vector)
		std::cout << s << '\n';
}

void main()
{
	Vector<string> s;
	print_vector(s);
}
