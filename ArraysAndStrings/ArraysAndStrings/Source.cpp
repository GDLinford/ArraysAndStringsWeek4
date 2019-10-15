#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {

	int IntegerValues[5];

	for (int i = 0; i < 5; i++ ) {

		std::cout << "Please enter a value: " << i << std::endl;
		std::cin >> IntegerValues[i];

	}

	for (int i = 0; i < 5; i++) {
		std::cout << "you entered the following values: " << IntegerValues[5] << std::endl;
	}
	

	
	

}