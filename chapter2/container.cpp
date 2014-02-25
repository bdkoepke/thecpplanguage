#include <list>
#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Container {
  public:
    virtual ~Container() {}
    virtual T& operator[](int) = 0;
    virtual int size() const = 0;
};

template<typename T>
class Vector_container : public Container<T> {
  vector<T> self;
  public:
    Vector_container(int size) : self(size) {}
    ~Vector_container() {}
    T& operator[](int i) { return self[i]; }
    int size() const { return self.size(); }
};

template<typename T>
class List_container : public Container<T> {
	list<T> self;
	public:
		List_container(int size) : self(size) {}
		~List_container() {}
		T& operator[](int i) {
			for (T& item : self) {
				if (i == 0)
					return item;
				--i;
			}
		}
		int size() const { return self.size(); }
};

template<typename T>
T sum(Container<T>& self, T initial) {
  T sum = initial;
	for (auto i = 0; i < self.size(); i++) {
    sum += self[i];
  }
  return sum;
}

int main(void) {
  int size = 10;
  List_container<int> vector(size);
  for (auto i = 0; i < size; i++) {
    vector[i] = i;
  }

  cout << sum(vector, 0) << endl;
}
