#include <iostream>
#include <string>

double square(double length);
double cube(double length);
std::string concatStrings(std::string string1, std::string string2);

int main() {

	double length = 5.0;
	//std::cout << square(length) << '\n';
	//std::cout << cube(length) << '\n';

	std::string firstname = "Bro";
	std::string lastname = "Code";
	
	std::cout << concatStrings(firstname, lastname);
	return 0;
}

double square(double length) {
	return length * length;
}

double cube(double length) {
	return pow(length, 3);
}

std::string concatStrings(std::string string1, std::string string2) {
	return string1 + " " + string2;
}
