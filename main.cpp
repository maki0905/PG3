#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

typedef void (*PFunc)(int*);

void Result(int *s) {
	int result = rand() % 6 + 1;
	if (result % 2 == *s) {
		printf("������!! �T�C�R���̖� : %d\n", result);
	}
	else {
		printf("�͂���;;  �T�C�R���̖� : %d\n", result);
	}
}

void judge(PFunc p, int choice) {
	Sleep(3 * 1000);
	p(&choice);
}

int main(void) {
	int choice = 0;
	while (choice != 9) {
		printf("��(�)�Ȃ�1��(����)�Ȃ�0����͂��Ă�������\n");
		printf("��߂�ꍇ��9�������Ă�������\n");
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