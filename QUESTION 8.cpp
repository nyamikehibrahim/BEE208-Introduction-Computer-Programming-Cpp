#include <iostream>
using namespace std;

int main() {
	int V;
	
	cout << "Determining whether the integer is Odd or Even" << "\n";
	cout << "Enter a number: "; cin >> V;
	
	if(V%2 != 0){
		cout << "Odd number";
	}else {
		cout << "Even number";
	}
	
	return 0;
}
