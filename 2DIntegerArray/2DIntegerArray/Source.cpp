#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {

	float aPositionsIn2DSpace[5][3]{
		{ 32.4, 51.5, 21.5 },
		{ 12.7, 32.5, 45.7 },
		{ 91.8, 43.3, 65.9 },
		{ 42.6, 64.3, 32.8 },
	    { 12.9, 87.9, 78.9 },
	};

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; i++) {
			std::cout << i << "  " << j << endl;
		}
	}

}