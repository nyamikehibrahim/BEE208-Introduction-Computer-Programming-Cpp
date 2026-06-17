#include <iostream> 
#include <cmath>
using namespace std;
int main() {
	int V1;
	int V2;
	int V3;
	
	cout<< "COMPARING EQUALITY OF THREE INTEGER VALUES" << "\n";
	
	cout<< "Enter fisrt value: ";
	cin >> V1;
	cout << "Enter second value: ";
	cin >> V2;
	cout << "Enter third value: ";
	cin >> V3;
	
	if(V1==V2 && V2==V3) {
		cout<< "Equal";
	}else { 
	cout << "Not Equal";
	}
	
	return 0;
}
