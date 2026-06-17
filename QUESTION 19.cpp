#include <iostream>
using namespace std;

int main() {
	long long binary, decimal= 0, base = 1, remainder;
	
	cout << "Converting binary to decimal, binary to hexadecimal, and binary to octadecimal"<< "\n";
	cout << "\n";
	cout << "Enter a binary number: "; cin >> binary;
	
	long long temp = binary;
	
	while (temp > 0) {
		remainder = temp % 10;
		decimal = decimal+ remainder * base;
		base = base * 2;
		temp = temp / 10;
	}
	
	cout << "Decimal equivalent: "<< decimal << "\n";
	cout << "Hexadecimal equivalent: "<< hex << decimal << "\n";
	cout << "Octal equivalent: " << oct << decimal << "\n";
	
	return 0;
	
}
