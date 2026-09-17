#pragma once
#include <iostream>

class Triangle {
	double _side, _height;
public:
	Triangle(double side, double height);
	inline double findArea() const noexcept {
		return (_side * _height) / 2.0;
	}
	inline double gSide() const noexcept {
		return _side;
	}
	inline double gHeight() const noexcept {
		return _height;
	}

	void sSide(double side);
	void sHeight(double height);
};
