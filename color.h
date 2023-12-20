#pragma once
#ifndef COLOR_H
#define COLOR_H

# define BLACK Color(0,0,0)
# define RED Color(220,0,40)
# define YELLOW Color(255,190,0)
# define GREEN Color(0,190,0)

#include <iostream>

class Color {
public:
	int r, g, b;
	Color(int r, int g, int b) {
		this->r = r;
		this->b = b;
		this->g = g;
	}
	Color() {
		this->r = 0;
		this->b = 0;
		this->g = 0;
	}
};

std::ostream& operator << (std::ostream& os, Color color) {
	return os << color.r << ' ' << color.g << ' ' << color.b << '\n';
}
#endif // COLOR_H