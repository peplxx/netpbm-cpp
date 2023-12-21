#include "../headers/geometry.h"
#include "../headers/image.h"

using Primitives::Rectangle;
using Primitives::Circle;

int main()
{
	std::ios::sync_with_stdio(false);
	ImageHandler img = ImageHandler(Color(255, 255, 255));
	for (int i = 10; i > 0; i--) {
		Circle circle = Circle(Point2(256 / 2, 256 / 2), (250 / 20) * i, Color(20 * i, 20 * i, 20 * i));
		img.drawFigure(circle);
	}

	img.process();
}

