#include <stdio.h>
#include <Windows.h>


int main() {
	SetConsoleOutputCP(65001);
	printf("%s", "こんにちは");
	return 0;
}