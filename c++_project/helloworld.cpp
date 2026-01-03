#include <iostream>
#include <string>
#include <limits>
#include <ctime>

int main() {
	
	std::string students[] = { "Spongebab", "Patrick", "Squidward", "Sandy" };
	int grades[] = { 65,72,81,93 };


	/*for (std::string student: students) {
		std::cout << student << '\n';
	}*/

	for (int grade : grades) {
		std::cout << grade << '\n';
	}

	return 0;
}



