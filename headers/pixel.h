#pragma once
#ifndef PIXEL_H
#define PIXEL_H
#include "point.h"
#include "color.h"
#include <iostream>

class Pixel: public Point2{
public:
	typedef Point2 super;
	Color color;
	Pixel(Point2 cordinates, Color color) {
		this->y = cordinates.y;
		this->x = cordinates.x;
		this->color = color;
	}
	Pixel(int x, int y) {
		super::Point2(x, y);
		this->color = BLACK;
	}
	Pixel(Point2 cordinates) {
		this->y = cordinates.y;
		this->x = cordinates.x;
		this->color = BLACK;
	}
	Pixel() {
		super::Point2(-1, -1);
		this->color = BLACK;
	}
};


std::ostream& operator << (std::ostream& os, Pixel& pixel) {
	return os << pixel.color;
}
void operator << (Pixel& pixel, Color color) {
	pixel.color = color;
}

#endif // !PIXEL_H