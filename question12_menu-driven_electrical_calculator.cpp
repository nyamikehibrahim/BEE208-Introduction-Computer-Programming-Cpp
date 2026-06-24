#include <iostream>
using namespace std;
int main() {
	int choice;
	float voltage, current, power, time;
	do{
		cout << "\n. Calculate Power\n2. Calculate Resistance\n3. Calculate Energy\n4. Exit\n";
		cout << "Enter choice:"; cin >> choice;
		switch(choice){
			case 1:
				cout << "Enter voltage (V): ";cin >> voltage;
				cout << "Enter current (A): ";cin >> current;
				cout << "Power = "<< voltage*current<<"W\n";
				break;
			case 2:
				cout << "Enter voltage (V): "; cin>> voltage;
				cout << "Enter current (A):"; cin >> current;
				cout << "Resistance = "<< voltage/current<< "Ohms";
				break;
			case 3:
				cout << "Enter power (W): "; cin >> power;
				cout << "Enter time (h): "; cin >> time;
				cout << "Energy = "<<power*time<< "Wh\n";
				break;
			case 4:
				cout << "Exiting...\n";
				break;
			default:
				cout << "Invalid selection\n";
		}
	}while(choice !=4);
	return 0;
}
