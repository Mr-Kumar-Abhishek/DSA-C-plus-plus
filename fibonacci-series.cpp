#include <iostream>
#include <array>

// fibonacci series
using namespace std;
int main(){

	int till = 10;

	int t1=  0;
	int t2= 1;
	
	cout << t1 << " ";
	cout << t2 << " ";
	for (int i = 0; i < 10; i++) {
		int t3 = t1 + t2;
		cout << t3 << " ";
		t1 = t2;
		t2 = t3;
	}
	cout << endl;
	
	return 0;
}

