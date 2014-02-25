#include <iostream>
using namespace std;

void copy_function() {
	int v1[10] = {0,1,2,3,4,5,6,7,8,9};
	int v2[10];
	for (auto i = 0; i != 10; ++i) 
		v2[i] = v1[i];
}

void print() {
	int v[] = {0,1,2,3,4,5,6,7,8,9};

	for (auto& x : v)
		++x;

	for (auto& x : v)
		cout << x << endl;

	for (auto& x : {10,21,32,43,54,65})
		cout << x << endl;
}

bool accept() {
	cout << "Do you want to proceed (y or n)?" << endl;
	char answer = 0;
	cin >> answer;
	if (answer == 'y') return true;
	return false;
}

bool impatient_accept() {
	int tries = 1;
	while(tries<4) {
		cout << "Do you want to proceed (y or n)?" << endl;
		char answer = 0;
		cin >> answer;
		switch(answer) {
			case 'y':
				return true;
			case 'n':
				return false;
			default:
				cout << "Invalid response" << endl;
				++tries;
		}
	}
	cout << "I'll take that for a no";
	return false;
}

int main() {
	print();
}
