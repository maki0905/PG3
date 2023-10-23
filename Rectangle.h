#pragma once
#include "IShape.h"
class Rectangle : public IShape
{
public:
	Rectangle(float width, float height);
	~Rectangle();

	void Size() override;
	void Draw() override;

private:
	float width_;
	float height_;
};

