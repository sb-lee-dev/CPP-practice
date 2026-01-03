#include <iostream>
#include <string>
#include <limits>
#include <ctime>

int main() {
	const int SIZE = 99;
	std::string foods[SIZE];
	fill(foods, foods + (SIZE/3), "pizza");
	fill(foods + (SIZE / 3), foods + (2 * SIZE / 3), "hamburgers");
	fill(foods + (2 * SIZE / 3), foods + SIZE, "sushi");

	for (std::string food : foods) {
		std::cout << food << '\n';
	}
	
	return 0;
}


