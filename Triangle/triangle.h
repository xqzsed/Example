#pragma once
#include <iostream>

class Triangle {
	double _side, _height;
public:
	Triangle(double side, double height);
	double findArea() const noexcept;

	inline double gSide() const noexcept {
		return _side;
	}
	inline double gHeight() const noexcept {
		return _height;
	}

	void sSide(double side);
	void sHeight(double height);
};
