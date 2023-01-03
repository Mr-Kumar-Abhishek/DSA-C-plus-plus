#include <iostream>
#include <array>

int main() {
	int n[] = {1,2,69,3,23,9,0,2,5,34,29,69,23};
	int n_size = std::end(n) - std::begin(n);
	
	std::cout << "sample array: ";
	for(int k = 0; k < n_size; k++) {
		std::cout << n[k] << " ";
	}
	std::cout << std::endl;
	
	for (int l = 0; l < n_size; l++) {
		for(int i = 1; i < n_size; i++) {
			if (n[i-1] < n[i]) {
				int temp = n[i-1];
				n[i-1] = n[i];
				n[i] = temp;
			}
		}
	}

	std::cout << "bubble sorrted array:" << std::endl;
	for(int j = 0; j < n_size; j ++ ) {
		std::cout << n[j] << " ";
	}
	std::cout<< std::endl;

	return 0;
}
