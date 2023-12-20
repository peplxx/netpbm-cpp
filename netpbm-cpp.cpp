#include "geometry.h"
#include "image.h"

using Primitives::Rectangle;
using Primitives::Circle;

int main()
{
	std::ios::sync_with_stdio(false);
	ImageHandler img = ImageHandler(Color(255, 255, 255));
	
	img.process();
}