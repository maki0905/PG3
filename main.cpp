#include <stdio.h>
#include <functional>
#include <stdlib.h>
#include <Windows.h>

void SetTimeout(int second) {
	Sleep(second * 1000);
}

int main(int argc, const char* argv[]) {
	int choice = 0;
	int second = 3;
	std::function<void(void)> result = [&] (/*int choice*/){
		int dice = rand() % 6 + 1;
		if (dice % 2 == choice) {
			[=]() {printf("当たり!! サイコロの目 : %d\n", dice); }();
		}
		else {
			[=]() {printf("はずれ;;  サイコロの目 : %d\n", dice); }();
		}
	};
	std::function<void(void)> judge = [=]() {
		SetTimeout(second);
		result();
	};
	while (choice != 9) {
		[]() {printf("半(奇数)なら1を丁(偶数)なら0を入力してください\n"); }();
		[]() {printf("やめる場合は9を押してください\n"); }();
		[&]() {scanf_s("%d", &choice); }();
		if (choice < 2) {
			judge();
		}
	}


	return 0;
}