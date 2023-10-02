#include <stdio.h>
#include <typeinfo>


template <typename T>
T Min(T a, T b) {
	if (a < b) {
		if (typeid(T) == typeid(int)) {
			printf("%d\n", a);
		}
		if (typeid(T) == typeid(float)) {
			printf("%f\n", a);
		}
		if (typeid(T) == typeid(double)) {
			printf("%lf\n", a);
		}
		return a;
	}
	if (typeid(T) == typeid(int)) {
		printf("%d\n", b);
	}
	if (typeid(T) == typeid(float)) {
		printf("%f\n", b);
	}
	if (typeid(T) == typeid(double)) {
		printf("%lf\n", b);
	}
	return b;
}

template <>
char Min<char>(char a, char b) {
	printf("数字以外は代入できません");
	return 0;
}

int main() {
	int num_int[2] = { 8, 10 };
	float num_float[2] = { 8.0f, 10.0f };
	double num_double[2] = { 8.0f, 10.0f };
	char num_char0 = '8';
	char num_char1 = '10';
	Min(num_int[0], num_int[1]);
	Min(num_float[0], num_float[1]);
	Min(num_double[0], num_double[1]);
	Min(num_char0, num_char1);
	
	
	return 0;
}