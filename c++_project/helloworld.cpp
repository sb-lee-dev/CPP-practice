#include <iostream>
#include <string>
#include <limits>
#include <ctime>

//void walk1(int steps);
//void walk2(int steps);
int factorial(int num);

int main() {

	std::cout << factorial(10);
	//walk2(10);


	return 0;
}

//int factorial(int num) {
//	int result = 1;
//	for (int i = 1; i <= num; i++) {
//		result = result * i;
//	}
//
//	return result;
//};

int factorial(int num) {
	if (num > 1) {
		return num * factorial(num - 1);
	}
	else {
		return 1;
	}
};

//iterative
//void walk1(int steps) {
//	for (int i = 0; i < steps; i++) {
//		std::cout << "You take a step!\n";
//	}
//}

//recursive
//void walk2(int steps) {
//	if(steps > 0) {
//		std::cout << "You take a step!\n";
//		walk2(steps - 1);
//	}
//}
