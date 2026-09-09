#include <iostream>
using namespace std;

class Triangle {
	double _side, _height;
public:
	Triangle();
	Triangle(double side, double height);
	double Area();

	double gSide() const;
	double gHeight() const;

	void sSide(double side);
	void sHeight(double height);
};

Triangle::Triangle(double side, double height) {
	sSide(side);
	sHeight(height);
}

double Triangle::gSide() const {
	return _side;
}
double Triangle::gHeight() const {
	return _height;
}

double Triangle::Area() {
	return (_side * _height) / 2.0;
}

void Triangle::sSide(double side) {
	if (side <= 0) {
		throw std::invalid_argument("Side of triangle should be positive ");
	}
	_side = side;
}

void Triangle::sHeight(double height) {
	if (height <= 0) {
		throw std::invalid_argument("Height of triangle should be positive");
	}
	_height = height;
}

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