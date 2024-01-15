#include <stdio.h>
#include <iostream>
#include <thread>



void Draw(int num) {
	std::cout << "thread" << num << std::endl;
}


int main() {
	int num = 1;

	std::thread th1(Draw, num++);
	th1.join();

	std::thread th2(Draw, num++);
	th2.join();

	std::thread th3(Draw, num++);
	th3.join();


	return 0;
}