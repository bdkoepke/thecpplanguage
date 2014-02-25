#include <stdexcept>
#include <iostream>

template<typename T>
class Vector {
private:
	T *self;
	int size_;
public:
	Vector(int size) : self(new T[size]), size_(size) {}
	~Vector() { delete [] self; }

	/**
	 * Copy constructor
	 */
	Vector(const Vector<T>& a)
		: self(new T[size_]),
		size_(a.size_)
	{
		for (auto i = 0; i < size_; ++i)
			self[i] = a[i];
	}
	/**
	 * Copy assignment operator
	 */
	Vector<T>& operator=(const Vector<T>& a)
	{
		T* p = new T[a.size()];
		for (auto i = 0; i < a.size(); ++i)
			p[i] = a[i];
		delete[] self;
		self = p;
		size_ = a.size();
		return *this;
	}

	Vector(Vector&& a)
		: self{a.elem},
		size_{a.size_}
	{
		a.self = nullptr;
		a.size_ = 0;
	}
	Vector<T>& operator=(Vector&& a)
	{
	}

	/**
	 * Index operator
	 */
	T& operator[](int i)
	{
		const Vector<T>& const_this = *this;
		const T& const_element = const_this[i];
		return const_cast<T&>(const_element);
	}
	/**
	 * Const index operator
	 */
	const T& operator[](int i) const
	{
		if (i < 0 || i >= size())
			throw std::out_of_range("Vector::operator[]");
		return self[i];
	}

	int size() const
	{
		return size_;
	}
};

template <typename T>
Vector<T> operator+(const Vector<T>& a, const Vector<T>& b)
{
	if (a.size() != b.size())
		throw std::length_error("Incorrect vector sizes");

	Vector<T> res(a.size());
	for (int i =0; i != a.size(); ++i)
		res[i] = a[i] + b[i];
	return res;
}

int main(void) {
	int size = 10;
	Vector<int> v(size);
	for (auto i = 0; i < size; ++i)
		v[i] = i;

	for (auto i = 0; i < size; ++i)
		std::cout << v[i] << std::endl;
}
