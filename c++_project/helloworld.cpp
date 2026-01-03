#include <iostream>
#include <string>
#include <limits>
#include <ctime>

int main() {

	int* pointer = nullptr;
	int x = 123;

	pointer = &x;

	if (pointer == nullptr) {
		std::cout << "address was not assigned!\n";
	}
	else {
		std::cout << "address was assigend!\n";
		std::cout << *pointer;
	}

	return 0;
}
