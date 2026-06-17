#include <iostream>
using namespace std;

int main() {
	float V1,V2,larger;
	
	cout << "Larger decimal number comparison" << "\n";
	cout << "\n";
	cout << "Enter first decimal value: "; cin >> V1;
	cout << "\n";
	cout << "Enter second decimal value: "; cin >> V2;
	
	larger = (V1>V2)? V1:V2;
	cout << "The larger decimal value is: "<< larger;
	
	return 0;
}
