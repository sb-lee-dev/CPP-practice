#include <iostream>

int main() {
	
	int x; //declaration
	x = 5; //assignment

	int y = 6;
	int sum = x + y;

	std::cout << x << '\n';
	std::cout << y << '\n';
	std::cout << sum << '\n';

	//integer (whole number)
	int age = 21;
	int year = 2026;
	int days = 7;

	std::cout << days << '\n';

	//double (number including decimal)
	double price = 10.99;
	double gpa = 2.5;
	double temp = 25.1;

	std::cout << price << '\n';

	// single character
	char grade = 'A';
	char initial = 'C';
	char currency = '$';

	std::cout << currency << '\n';

	// boolean (true or false)
	bool student = true;
	bool power = false;
	bool forSale = true;

	std::cout << power << '\n';

	// string (objects that represents a sequence of text)
	std::string name = "Bro";
	std::string day = "Friday";
	std::string food = "pizza";
	std::string address = "123 Fake St.";

	std::cout << "Hello " << name << '\n';
	std::cout << "You are " << age << " years old";

	return 0;
}