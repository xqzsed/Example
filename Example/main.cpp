#include <iostream>
#include "triangle.h"
using namespace std;

int main() {
	Triangle triangle(5.0, 2.0);

	cout << "The side is: " << triangle.gSide() << endl;
	cout << "The height is: " << triangle.gHeight() << endl;

	double area = triangle.Area();

	cout << "Area of triangle is: " << area << endl;

	triangle.sSide(8.0);
	triangle.sHeight(5.0);

	cout << endl;
	cout << "The new side is: " << triangle.gSide() << endl;
	cout << "The new height is: " << triangle.gHeight() << endl;

	cout << "New area of triangle is: " << triangle.Area() << endl;
	return 0;
}