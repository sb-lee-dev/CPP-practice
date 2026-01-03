#include <iostream>
#include <string>
#include <limits>
#include <ctime>

int main() {
	std::string name = "Bro hihi";
	double gpa = 2.5;
	char grade = 'A';
	bool student = true;
	char grades[] = {'A', 'B', 'C', 'D', 'F'};
	std::string students[] = { "Spongebob", "Patrick", "Squidward" };

	std::cout << sizeof(students) / sizeof (std::string) << "elements\n";

	return 0;
}



