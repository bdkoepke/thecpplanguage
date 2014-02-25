#include <stdexcept>

template<typename T>
class Vector {
	private:
		T* _self;
		int _size;
	public:
		Vector(int size);
		~Vector() { delete[] _self; }

		Vector(const Vector<T>& copy);
		Vector& operator=(const Vector<T>& copy);

		T& operator[](int i);
		const T& operator[](int i) const;

		int size() const { return _size; }
};

template<typename T>
Vector<T>::Vector(int size)
{
	if (size < 0)
		throw std::out_of_range();
	_self = new T[size];
	_size = size;
}

template<typename T>
const T& Vector<T>::operator[](int i) const
{
	if (i < 0 || size() <= i)
		throw std::out_of_range("Vector::operator[]");
	return _self[i];
}

template<typename T>
T* begin(Vector<T>& x)
{
	return &x[0];
}

template<typename T>
T* end(Vector<T>& x)
{
	return x.begin() + x.size();
}
