#include <iostream>
using namespace std;

int main() {
	double a, h, s;
	cout << "Input side and height of triangle: ";
	cin >> a >> h;
	cout << endl;
	s = 0.5 * h * a;
	std::cout << "Area is: " << s << std::endl;
	return 0;
}