#include <iostream>
#include <string>
#include <limits>
#include <ctime>

int main() {
	
	//std::string students[] = { "Spongebab", "Patrick", "Squidward", "Sandy" };
	char grades[] = { 'A', 'B', 'C', 'D', 'F' };

	for (int i = 0; i < sizeof(grades) / sizeof(char); i++) {
		std::cout << grades[i] << '\n';
	}

	return 0;
}



