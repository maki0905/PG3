#include <stdio.h>
#include <list>
#include <iostream>

int main() {
	
	std::list<const char*> yamanoteStations{
		"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani", 
		"Nippori", "Tabata", "Komagome", "Sugamo", "Otsuka", "Ikebukuro", 
		"Mejiro", "Takadanobaba", "Shin-Okubo", "Shinjuku", "Yoyogi", "Harajuku", 
		"Shibuya", "Ebisu", "Meguro", "Gotanda", "Osaki", "Shinagawa", "Tamachi", 
		"Hamamatsucho", "Shimbashi", "Yurakucho"
	};

	std::cout << "山手線の駅名(1970)" << std::endl;
	for (const auto& station : yamanoteStations) {
		std::cout << station << std::endl;
	}

	for (std::list<const char*>::iterator itr = yamanoteStations.begin(); itr != yamanoteStations.end(); ++itr) {
		if (*itr == "Tabata") {
			itr = yamanoteStations.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}

	std::cout << "" << std::endl;

	std::cout << "山手線の駅名(2019)" << std::endl;
	for (const auto& station : yamanoteStations) {
		std::cout << station << std::endl;
	}

	for (std::list<const char*>::iterator itr = yamanoteStations.begin(); itr != yamanoteStations.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = yamanoteStations.insert(itr, "TakanawaGateway");
			++itr;
		}
	}

	std::cout << "" << std::endl;

	std::cout << "山手線の駅名(2022)" << std::endl;
	for (const auto& station : yamanoteStations) {
		std::cout << station << std::endl;
	}


	return 0;
}