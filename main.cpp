#include <iostream>
#include <chrono>

int main() {
	std::string a(1000000, 'a');

	std::chrono::system_clock::time_point start[2], end[2];
	start[0] = std::chrono::system_clock::now();
	std::string b = a;
	end[0] = std::chrono::system_clock::now();

	start[1] = std::chrono::system_clock::now();
	//std::string&& c = std::string(100000000, 'a');
	std::string&& c = std::move(a);
	end[1] = std::chrono::system_clock::now();

	std::cout << "ƒRƒs[ : " << std::chrono::duration_cast<std::chrono::microseconds>(end[0] - start[0]).count() << "ƒÊs" << std::endl;
	std::cout << "ˆÚ“® : " << std::chrono::duration_cast<std::chrono::microseconds>(end[1] - start[1]).count() << "ƒÊs" << std::endl;

	return 0;
}