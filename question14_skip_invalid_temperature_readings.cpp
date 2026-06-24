#include <iostream>
using namespace std;
int main() {
	float temp, total=0;
	int validCount=0;
	for (int i=1; i<=10; i++){
		cout << "Enter temperature reading "<<i<<" (C): ";cin >> temp;
		if (temp<0)continue;
		total+= temp;
		validCount++;
	}
	cout << "Average valid temperature = " << total/validCount<< " C";
	return 0;
}
