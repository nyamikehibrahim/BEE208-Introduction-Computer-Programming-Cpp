#include <iostream>
using namespace std;
int main() {
	float voltage;
	bool lowBattery= false;
	for (int i=1; i<=10; i++){
		cout << "Enter battery voltage reading "<< i<<"(V):";cin >> voltage;
		if(voltage<10.5){
			cout << "Low battery detected. Test stopped.";
			lowBattery= true;
			break;
		}
	}
	if (!lowBattery) cout << "Battery voltage normal.";
	
	return 0;
}
