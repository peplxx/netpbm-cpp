#include "../headers/geometry.h"
#include "../headers/image.h"
#include <cmath>

using Primitives::Rectangle;
using Primitives::Circle;

int main()
{
	std::ios::sync_with_stdio(false);
	ImageHandler img = ImageHandler(BLACK);
	int up_bound = 125;
	int left_bound = 30;
	for (int x = 250; x > 0; x -= 15) {
		Circle c = Circle(Point2(sin(x / 15) * 15 + up_bound, x + left_bound), 25, Color(130 - x, 60 - x, 190 - x));
		img.drawFigure(c);
	}
	img.process();
}