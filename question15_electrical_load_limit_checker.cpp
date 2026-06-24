#include <iostream>
using namespace std;
int main() {
	float power, totalLoad=0;
	cout << "Enter appliance power rating (W): "; cin >> power;
	totalLoad+= power;
	while(totalLoad <= 3000){
		cout << "Total load so far: "<< totalLoad<< " W\n";
		cout << "Enter appliance power rating (W): ";cin >> power;
		totalLoad+= power;
	}
	cout << "Load limit exceeded. Do not add more appliances.\n";
	cout << "Final total load = "<< totalLoad<< " W";
	
	return 0;
}
