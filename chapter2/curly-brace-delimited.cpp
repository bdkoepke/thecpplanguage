#include <complex>
#include <vector>

using namespace std;

double d1 = 2.3;
double d2 {2.3};
complex<double> z = 1;
complex<double> z2 {d1, d2};
complex<double> z3 = {1, 2};
vector<int> v {1,2,3,4,5,6};

template <typename T>
constexpr T square(T x) {
	return x * x;
}

const int dmv = 17;
int var = 17;
constexpr double max1 = 1.4 * square(dmv);
const double max3 = 1.4 * square(var);

int main() {
	auto b = true;
	auto ch = 'x';
	auto i = 123;
	auto d = 1.2;
	int y = 4;
	auto z = sqrt(y);
}
