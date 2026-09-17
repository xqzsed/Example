#include "triangle.h"
Triangle::Triangle(double side, double height) {
	sSide(side);
	sHeight(height);
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
