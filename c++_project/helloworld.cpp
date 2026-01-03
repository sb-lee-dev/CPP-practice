#include <iostream>
#include <string>
#include <ctime>

void happyBirthday(std::string, int);

int main() {

	std::string name = "Bro";
	int age = 21;
	happyBirthday(name, age); //argumnet
	
	return 0;
}

void happyBirthday(std::string name, int age) { //parameter
	std::cout << "Happy birthday to " << name << '\n';
	std::cout << "You are " << age << " years old" << '\n';
}