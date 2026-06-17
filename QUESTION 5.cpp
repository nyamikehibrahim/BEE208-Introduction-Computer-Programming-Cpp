#include <iostream>
using namespace std;

int main () {
	int V1;
	int V2;
	
	cout << "GREATER VALUE COMPARISON" <<"\n";
	cout << "\n";
	cout << "Enter first value: ";
	cin >> V1;
	cout << "Enter second value: ";
	cin >> V2;
	
	if(V1> V2) {
		cout << "First value is greater";
	}else {
		cout << "Second value is greater";
	}
	
	return 0;
}
