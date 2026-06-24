#include <iostream>
using namespace std;
int main() {
	int choice;
	 cout << "1. Resistor\n2. Capacitor\n3. Diode\n4. Transistor\n5. LED\n";
	 cout << "Enter choice: ";
	 cin >> choice;
	 switch (choice) {
	 	case 1: cout << "Resistor: Used to limit current in a circuit."; break;
	 	case 2: cout << "Capacitor: Stores electrcal energy."; break;
	 	case 3: cout << "Diode: Allows current tp flow in one direction."; break;
	 	case 4: cout << "Transistor: Used to amplify or switch signals."; break;
	 	case 5: cout << "LED: Emits light when current flows through it."; break;
	 	default: cout << "Invalid selection"; break;
	 }
	 return 0;
}
