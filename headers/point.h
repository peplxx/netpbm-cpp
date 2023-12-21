#pragma once
#ifndef POINT_H
#define POINT_H

#include <cmath>

class Point2 {
public:
	int x, y;
	Point2(int x, int y) {
		this->x = x;
		this->y = y;
	}
	Point2() {
		this->x = 0;
		this->y = 0;
	}
	double mag(Point2 other) {
		return sqrt(squared_magnitude(other));
	}
	int squared_magnitude(Point2 other) {
		return pow(this->x - other.x, 2) + pow(this->y - other.y, 2);
	}
};

Point2 operator + (Point2 a, Point2 b) {
	return Point2(a.x+b.x,a.y+b.y);
}
Point2 operator *(Point2 a, int c) {

	return Point2(a.x*c,a.y*c);
}
Point2 operator - (Point2 a, Point2 b) {
	return a + (b * -1);
}
#endif