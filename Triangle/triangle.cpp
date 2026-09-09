#include "triangle.h"
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
