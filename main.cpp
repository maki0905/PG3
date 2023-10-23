#include <stdio.h>

#include "IShape.h"
#include "Rectangle.h"
#include "Circle.h"

int main() {
	float width = 0.0f;
	float height = 0.0f;
	float radius = 0.0f;

	printf("矩形の横幅を入力してください。\n");
	scanf_s("%f", &width);
	printf("矩形の縦幅を入力してください。\n");
	scanf_s("%f", &height);
	printf("円の半径を入力してください。\n");
	scanf_s("%f", &radius);

	IShape* ishape[2];
	ishape[0] = new Rectangle(width, height);
	ishape[1] = new Circle(radius);

	for (int i = 0; i < 2; i++) {
		ishape[i]->Size();
		ishape[i]->Draw();
	}


	return 0;
}