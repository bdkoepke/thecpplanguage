#include <iostream>
using namespace std;

template <typename T>
T square(T x) {
	return x * x;
}

template <typename T>
void print_square(T x) {
	cout << "the square of " << x << " is " << square(x) << "\n";
}

int main() {
	print_square(1.234);
}
