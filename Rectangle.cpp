#include "Rectangle.h"
#include <stdio.h>

Rectangle::Rectangle(float width, float height)
{
	width_ = width;
	height_ = height;
}

Rectangle::~Rectangle()
{
}

void Rectangle::Size()
{
	area_ = width_ * height_;
}

void Rectangle::Draw()
{
	printf("矩形の面積は%fです\n", area_);

}
