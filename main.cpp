#include <stdio.h>


template <typename T>
T Min(T a, T b) {
	if (a < b) {
		return a;
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
	printf("%d\n", Min(num_int[0], num_int[1]));
	printf("%f\n", Min(num_float[0], num_float[1]));
	printf("%lf\n", Min(num_double[0], num_double[1]));
	Min(num_char0, num_char1);
	
	
	return 0;
}