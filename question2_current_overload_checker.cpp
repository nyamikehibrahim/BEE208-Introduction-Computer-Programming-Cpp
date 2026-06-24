#include <iostream>
using namespace std;
int main() {
	float ratedCurrent, measuredCurrent;
	
	cout << "Enter rated current (A): ";
	cin >> ratedCurrent;
	cout << "Enter measured current (A): ";
	cin >> measuredCurrent;
	if (measuredCurrent > ratedCurrent)
	cout << "Overload detectd. Circuit breaker should trip.";
	else
	cout << "Current is within safe limit.";
	
	return 0;
}
