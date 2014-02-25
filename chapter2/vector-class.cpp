#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
class Vector {
	public:
		Vector(int size) {
			if (size < 0)
				throw length_error("size");
			_self = new T[size];
			_size = size;
		}

		T& operator[](int i) {
			if (i < 0 || _size <= i)
				throw out_of_range("Vector::operator[]");
			return _self[i];
		}

		int size() { return _size; }
	private:
		T* _self;
		int _size;
};

int main() {
	auto size = 100;
	Vector<int> v(100);
	for (auto i = 0; i < size; i++)
		v[i] = i;
	for (auto i = 0; i < size; i++)
		cout << v[i] << endl;
}
