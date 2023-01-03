#include <iostream>
#include <array>

int main() {
	// find the largest number
	int sample = 0; // sample variable 

	int N[]  = {10, 20, 90, 30, 40 , 55, 100};
	
	int length = std:: end(N) - std::begin(N);

	for(int i = 0; i < length; i++) {

		if (sample < N[i]) {
			sample = N[i];
		}
	}

	std::cout << sample << std::endl;
	
	return 0;
}


