#pragma once
#ifndef IMAGE_H
#define IMAGE_H

#include <vector>

#include "geometry.h"

class ImageHandler {
private:

public:
	static const int height = 256, width = 256;
	std::vector<std::vector<Pixel>> image;
	ImageHandler() {
		image = std::vector<std::vector<Pixel>>(height , std::vector<Pixel>(width));
		init(BLACK);
	}
	ImageHandler(Color canavas_color) {
		image = std::vector<std::vector<Pixel>>(height, std::vector<Pixel>(width));
		init(canavas_color);
	}

	void init(Color init_color) {
		Point2 leftup = Point2(0, 0),rightdown = Point2(height - 1, width - 1);
		for (int i = leftup.x; i <= rightdown.x; i++) for (int j = leftup.y; j <= rightdown.y; j++) {
			image[i][j] = Pixel(Point2(i,j),init_color);
		}
	}

	void fillRect(Point2 leftup, Point2 rightdown, Color color) {
		// TODO: Bound check
		for (int i = leftup.x; i <= rightdown.x; i++) for (int j = leftup.y; j <= rightdown.y; j++) {
			image[i][j] << color;
		}
	}

	void drawFigure(Primitives::Figure& figure) {
		Point2 leftup = Point2(std::max(0,figure.leftup.x),std::max(0,figure.leftup.y)), 
			rightdown = Point2(std::min(height-1, figure.rightdown.x), std::min(width-1, figure.rightdown.y));
		Color color = figure.color;
		for (int i = leftup.x; i <= rightdown.x; i++) 
			for (int j = leftup.y; j <= rightdown.y; j++) {
			if (figure.function(image[i][j]))image[i][j] << color;
		}
	}

	void process() {
		std::cout << "P3\n" << width << ' ' << height << "\n255\n";
		for (int i = 0; i < height; i++) {
			std::clog << "[LOG] Rendering line " << i + 1 << '/' << height << "...\n";
			for (int j = 0; j < width; j++) std::cout << image[i][j];

		}
		std::clog << "[LOG] Render done...\n";
	}
};

#endif // !IMAGE_H