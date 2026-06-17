#include <iostream>
using namespace std;

int main() {
	int v;
	
	cout << "Checking whether the given number is both Odd and divisible by 3" << "\n";
	cout << "\n";
	cout << "Enter your number: "; cin >> v;

	if(v%2 !=0 && v%3==0){
		cout << "Number is both Odd and divisble by 3";
	}else{
		cout << "Number is not both Odd and divisible by 3";
	}
	
	return 0;
}
