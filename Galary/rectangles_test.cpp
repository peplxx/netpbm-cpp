#include "../geometry.h"
#include "../image.h"

using Primitives::Rectangle;
using Primitives::Circle;

int main()
{
	std::ios::sync_with_stdio(false);
	ImageHandler img = ImageHandler();
	Rectangle r1 = Rectangle(Point2(20, 20), Point2(100, 220), RED);
	Rectangle r2 = Rectangle(Point2(100, 100), Point2(220, 220), YELLOW);
	img.drawFigure(r1);
	img.drawFigure(r2);
	img.process();
}