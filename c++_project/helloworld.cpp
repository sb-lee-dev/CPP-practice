#include <iostream>
#include <string>
#include <limits>
#include <ctime>

int main() {

	/*int* pNum = nullptr;

	pNum = new int;

	*pNum = 21;

	std::cout << "address: " << pNum << '\n';
	std::cout << "value: " << *pNum << '\n';

	delete pNum;*/

	char* pGrades = NULL;
	int size;

	std::cout << "how many grades to enter in?: ";
	std::cin >> size;

	pGrades = new char[size];

	for (int i = 0; i < size; i++) {
		std::cout << "Enter grade #" << i + 1 << ": ";
		std::cin >> pGrades[i];
	}

	for (int i = 0; i < size; i++) {
		std::cout << pGrades[i] << " ";
	}

	delete[] pGrades;

	return 0;
}
