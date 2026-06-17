#include <iostream>
using namespace std;

int main() {
	long long binary, decimal= 0, base = 1, remainder;
	
	cout << " Converting binary to decimal"<< "\n";
	cout << "\n";
	cout << "Enter a binary number: "; cin >> binary;
	cout << "\n";
	while (binary> 0) {
		remainder = binary % 10;
		decimal = decimal + remainder * base;
		base = base* 2;
		binary = binary / 10;
	}
	
	cout << "Decimal value: " << decimal;
	
	return 0;
	
}
