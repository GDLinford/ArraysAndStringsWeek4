#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {

	float FloatValues[5];

		for (int i = 0; i < 5; ++i) 
		{
			std::cout << "Please enter a float value: " << std::endl;
			std::cin >> FloatValues[i];
		}

		std::cout << "Please choose a float value to delete " << std::endl;
		

		for (int i = 0; i < 5; i++)
		{
			FloatValues[i] = FloatValues[i + 1];
		}
}		