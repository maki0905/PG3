#include <stdio.h>
#include "Comparison.h"


int main() {
	Comparison<int, int> c1(10, 9);
	Comparison<float, float> c2(8.4f, 4.5f);
	Comparison<double, double> c3(5.5, 2.9);
	Comparison<int, float> c4(13, 14.4f);
	Comparison<int, double> c5(9, 8.8);
	Comparison<float, double> c6(6.6f, 6.5);

	printf("10 : 9 = %d \n", c1.Min());
	printf("8.4f : 4.5f = %f\n", c2.Min());
	printf("5.5 : 4.5 = %lf\n", c3.Min());
	printf("13 : 14.4f = %d\n", c4.Min());
	printf("9 : 8.8 = %d\n", c5.Min());
	printf("6.6f : 6.5 = %f\n", c6.Min());

	return 0;
}