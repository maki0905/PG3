#pragma once
#include "IShape.h"
class Circle : public IShape
{
public:
	Circle(float radius);
	~Circle();

	void Size() override;
	void Draw() override;
private:
	float radius_;
};

