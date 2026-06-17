#include <iostream>
#include <string>
using namespace std;

int main() {
	string hi;
	
	cout << "User say 'hello'" << "\n";
	cout << "\n";
	cout << "Your response: "; cin >> hi;
	
	if(hi== "hello"){
		cout << "Hello!";
	}else{
		cout << "Goodbye";
	}
	
	return 0;
	
}
