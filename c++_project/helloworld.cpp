#include <iostream>
#include <string>

int main() {

	int rows;
	int cols;
	char sb;

	std::cout << "How mnay rows?: ";
	std::cin >> rows;

	std::cout << "How mnay columns?: ";
	std::cin >> cols;

	std::cout << "Enter a symbol to use: ";
	std::cin >> sb;

	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= cols; j++) {
			std::cout << sb;
		}
		std::cout << '\n';
	}
	
	return 0;
}