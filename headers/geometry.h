#pragma once
#ifndef GEOMETRY_H2D
#define GEOMETRY_H2D
#include <algorithm>

#include "color.h"
#include "point.h"
#include "pixel.h"

namespace Primitives {
	class Figure {
		public:
			Point2 leftup, rightdown;
			Color color;
			virtual bool function(Pixel&) { return true; };
	};
	class Rectangle : public Figure {
		public:
			Rectangle() {};
			Rectangle(Point2 leftup, Point2 rightdown, Color color) {
				this->leftup = leftup;
				this->rightdown = rightdown;
				this->color = color;
			}
			bool finction(Pixel& pixel) {
				return true;
			}
	};

	class Circle : public Figure {
		public:
			Point2 center;
			int radius;
			Circle(Point2 center, int radius, Color color) {
				this->center = center;
				this->radius = radius;
				this->color = color;
				this->leftup = center - Point2(radius, radius);
				this->rightdown = center + Point2(radius, radius);
			}
			bool function(Pixel& pixel) {
				return pixel.squared_magnitude(center) <= radius*radius;
			}
	};
}

#endif