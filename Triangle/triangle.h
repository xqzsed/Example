#pragma once
#include <iostream>

class Triangle {
	double _side, _height;
public:
	Triangle(double side, double height);
	double findArea();

	double gSide() const noexcept;
	double gHeight() const noexcept;

	void sSide(double side);
	void sHeight(double height);
};
