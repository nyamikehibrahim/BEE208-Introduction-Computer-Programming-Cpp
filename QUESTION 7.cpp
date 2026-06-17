#include <iostream>
#include <string>
using namespace std;
int main() {
	string x;
	
	cout << "DOES WORD CONTAIN 'a' OR NOT" << "\n";
	cout << "\n";
	
	cout << "Type a word: "; cin >> x;
	
	if(x.find('a')!=string::npos) {
		cout << "Contains 'a'";
	}else {
	 cout << "Does not contain 'a'";
	}
	
	return 0;
}
