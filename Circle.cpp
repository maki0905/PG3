#include "Circle.h"
#include <stdio.h>

Circle::Circle(float radius)
{
	radius_ = radius;
}

Circle::~Circle()
{
}

void Circle::Size()
{
	area_ = radius_ * radius_ * 3.14f;
}

void Circle::Draw()
{
	printf("円の面積は%fです\n", area_);
}
