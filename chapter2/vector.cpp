#include <cstdlib>
#include <iostream>

template <typename T>
struct Vector {
	int size;
	T* a;
};

template <typename T>
Vector<T>* vector_new(int size) {
	Vector<T>* self = (Vector<T>*)std::malloc(sizeof(Vector<T>));
	self->a = new T[size];
	self->size = size;
	return self;
}

template <typename T>
void vector_set(Vector<T>* self, int index, T value) {
	self->a[index] = value;
}

template <typename T>
T vector_get(Vector<T>* self, int index) {
	return self->a[index];
}

int main() {
	auto size = 10;
	auto vector = vector_new<int>(size);
	for (auto i = 0; i < size; ++i)
		vector_set(vector, i, i);
	for (auto i = 0; i < size; ++i)
		std::cout << vector_get(vector, i) << std::endl;
}
