#include <iostream>
using namespace std;
int main() {
	float voltage;
	cout << "Enter battery voltage (V): "; cin >> voltage;
	while(voltage >=12){
		cout << "Battery voltage normal: "<<voltage<< "V\n";
		cout << "Enter battery voltage (V):"; cin >> voltage;
	}
	cout << "Battery voltage low. Recharge required.";
	
	return 0;
}
