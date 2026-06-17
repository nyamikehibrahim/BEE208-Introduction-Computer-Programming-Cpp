#include <iostream>
using namespace std;

int main() {
	int V;
	
	cout << "Checking if a number is a power of 2" << "\n";
	cout << "\n";
	cout << "Enter a number: "; cin >> V;
	cout << "\n";
	
	if(V>0 && (V& (V-1))==0) {
		cout << "Number is a power of 2";
	} else {
		cout << "Number is not a power of 2";
	}
	
	return 0;
}
