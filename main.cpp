#include <stdio.h>
#include <functional>
#include <stdlib.h>
#include <Windows.h>

int main(int argc, const char* argv[]) {
	
	std::function<void(int)> result = [] (int choice){
		int dice = rand() % 6 + 1;
		if (dice % 2 == choice) {
			[=]() {printf("������!! �T�C�R���̖� : %d\n", dice); }();
		}
		else {
			[=]() {printf("�͂���;;  �T�C�R���̖� : %d\n", dice); }();
		}
	};
	std::function<void(int)> judge = [=] (int choice){
		Sleep(3 * 1000);
		result(choice);
	};
	int choice = 0;
	while (choice != 9) {
		[]() {printf("��(�)�Ȃ�1��(����)�Ȃ�0����͂��Ă�������\n"); }();
		[]() {printf("��߂�ꍇ��9�������Ă�������\n"); }();
		[&]() {scanf_s("%d", &choice); }();
		if (choice < 2) {
			judge(choice);
		}
	}


	return 0;
}