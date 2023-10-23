#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

typedef void (*PFunc)(int*);

void Result(int *s) {
	int result = rand() % 6 + 1;
	if (result % 2 == *s) {
		printf("当たり!! サイコロの目 : %d\n", result);
	}
	else {
		printf("はずれ;;  サイコロの目 : %d\n", result);
	}
}

void judge(PFunc p, int choice) {
	Sleep(3 * 1000);
	p(&choice);
}

int main(void) {
	int choice = 0;
	while (choice != 9) {
		printf("半(奇数)なら1を丁(偶数)なら0を入力してください\n");
		printf("やめる場合は9を押してください\n");
		scanf_s("%d", &choice);
		if (choice != 9) {
			if (choice < 2) {
				PFunc p = Result;
				judge(p, choice);
			}
		}
	}

	return 0;
}