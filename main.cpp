#include <stdio.h>

int Recursive(int time , int wage) {
	if (time <= 1) {
		return (wage);
	}

	return (wage + Recursive(time - 1, (wage * 2 - 50)));
}

int main() {
	const int wage = 1072;
	const int time = 8;

	printf("一般的な賃金体系の場合 : %d円\n", wage * time);
	printf("再帰的な賃金体系の場合 : %d円\n", Recursive(time, 100));

	return(0);
}