#include <iostream>
using namespace std;

int main() {
	char letter;
	
	cout << "UPPERCASE LETTER DETERMINATION" << "\n";
	cout << "\n";
	
	cout << "Type a single letter: "; cin>> letter;
	
	if(isupper(letter) && letter>= 'A' && letter<= 'Z') {
		cout << "Uppercase letter";	
	}else {
	 cout << "Not an uppercase letter";
	}
	
	return 0;
}
