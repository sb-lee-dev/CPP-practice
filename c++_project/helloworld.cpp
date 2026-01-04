#include <iostream>
#include <string>
#include <limits>
#include <ctime>

class Stove {
private:
	int temp = 0;
public:
	Stove(int temp) {
		setTemp(temp);
	}
	int getTemp() {
		return temp;
	}
	void setTemp(int temp) {
		if (temp < 0) {
			this->temp = 0;
		}
		else if (temp >= 10) {
			this->temp = 10;
		}
		else {
			this->temp = temp;
		}
	}
};

int main() {
	Stove stove(15);

	//stove.setTemp(6);

	std::cout << "The temp setting is: " << stove.getTemp();
	return 0;
}
