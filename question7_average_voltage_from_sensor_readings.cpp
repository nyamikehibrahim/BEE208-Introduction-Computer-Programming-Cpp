#include <iostream>
using namespace std;
int main() {
	float reading, total = 0;
	for (int i=1; i<= 10; i++){
		cout << "Enter voltage reading "<< i << "(V):";
		cin >> reading;
		total =+ reading;
	}
	cout << "Average Voltage = "<< total/10<<"V";
	return 0;
}
