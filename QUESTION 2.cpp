#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float r;
	float pi = M_PI;
	
	cout << "Area of a circle = " << "pi multiplied by radius(r) squared" << "\n";
	
	cout << "Input radius(r): ";
	cin>> r;
	
	cout << "Area of the circle = " << pi*pow(r,2);
	
	return 0;
}
