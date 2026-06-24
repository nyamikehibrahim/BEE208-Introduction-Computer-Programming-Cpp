#include <iostream>
using namespace std;
int main() {
	float resistor, total= 0;
	for (int i=1; i<= 5; i++){
		cout << "Enter resistor R"<< i <<"(Ohms):";
		cin >> resistor;
		total+= resistor;
	}
	cout << " Total Resistance = "<< total<< "Ohms";
	
	return 0;
}
