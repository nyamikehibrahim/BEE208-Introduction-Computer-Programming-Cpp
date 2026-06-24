#include <iostream>
using namespace std;
int main() {
	int choice;
	float voltage, current, power, time;
	
	cout << "1. Calculate DC Power\n2. Calculate Resistance\n3. Calculate\n";
	cout << "Enter choice: "; cin >> choice;
	switch(choice){
		case 1:
			cout << "Enter voltage (V): ";cin >> voltage;
			cout << "Enter current (A): ";cin >> current;
			cout << "Power = "<< voltage*current << "W";
			break;
		case 2:
			cout << "Enter voltage (V): ";cin >> voltage;
			cout << "Enter current *(A): ";cin >> current;
			cout << "Resistance = "<< voltage/current<< "Ohms";
			break;
		case 3:
			cout << "Enter Power(W): "; cin >> power;
			cout << "Enter time (h): "; cin >> time;
			cout << "Energy = "<< power*time << "Wh";
			break;
		default:
			cout << "Invalid selection";
	}
	return 0;
}
