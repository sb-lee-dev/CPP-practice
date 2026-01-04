#include <iostream>
#include <string>
#include <limits>
#include <ctime>

enum Day {sunday, monday, tuesday};
enum Flavor { vanilla, chocolate, strawberry, mint };

int main() {

	Day today = sunday;

	switch (today) {
	case sunday: std::cout << "It is Sunday!\n";
		break;
	}

	return 0;
}
