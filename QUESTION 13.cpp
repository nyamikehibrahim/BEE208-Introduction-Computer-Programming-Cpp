#include <iostream>
#include <string>
using namespace std;
int main() {
	int x;
	int y;
	string s;
	string k = "71Ftgsdgw";
	
	cout << "INTERCHANGING(SWAP) OF VALUES OF TWO VARIABLE" << "\n";
	cout << "\n";
	cout << "Enter first value(x): "; cin >> x;
	cout << "Enter second value(y): "; cin >> y;
	cout << "Before Swap: x = " << x <<" and y = " << y << "\n";
	cout << "Press any letter or number to swap values: "; cin >> s;
	cout << "\n";
	
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;
	
	if(s !=k){
		cout << "After Swap: x = "<<x<<" and y = "<<y;
	}else {
		cout << "Invalid response";
	}
	
	return 0;
}
