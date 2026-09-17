#include <iostream>
#include "triangle.h"
using namespace std;

int main() {
	double side = 0.0;
	double height = 0.0;

	cout << "The side is: ";
	cin >> side;
	cout << endl;

	cout << "The height is: ";
	cin >> height;
	cout << endl;

	Triangle input(side, height);
	cout << "Area of triangle is: " << input.findArea() << endl;
	return 0;
}