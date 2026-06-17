#include <iostream>
using namespace std;
int main() {
	int V1;
	int V2;
	
	cout<< "Enter first value(x):";
	cin>> V1 ;
	
	cout<< "Enter second value(y):";
	cin>> V2 ;
	
	cout << "Sum(x+y) = " << V1 + V2<< "\n";
	cout << "Difference(x-y) = " << V1 - V2<< "\n";
	cout << "Product(x*y) = " << V1 * V2<< "\n";
	cout << "Quotient(x/y) = " << V1 / V2<< "\n";
	
	return 0;
}
