#pragma once
#include <iostream>

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
