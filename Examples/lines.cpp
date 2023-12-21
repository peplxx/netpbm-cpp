#include "headers/geometry.h"
#include "headers/image.h"
#include <cmath>

using Primitives::Rectangle;
using Primitives::Circle;
using Primitives::Line;


int main()
{
	std::ios::sync_with_stdio(false);
	ImageHandler img = ImageHandler(BLACK);
	int distance = -50;
	for (int i = 1; i <= 15; i++) {
		distance -= (i * 2 + 1);
		Line l = Line(1, 2, distance, i, RED);
		distance -= 50;
		img.drawFigure(l);
	}
	/*int counter = 0;
	for (double i = 0.2; i <= 5; i += 0.3) {
		Color line_color = YELLOW;
		if (counter % 2)
			line_color = GREEN;
		Line l = Line(1, i, -120, 0.7, line_color);
		img.drawFigure(l);
		l = Line(1, -i, -120, 0.7, line_color);
		img.drawFigure(l);
		if (i>1.5)
			i += 0.5;
		counter++;
	}
	*/
	img.process();
}