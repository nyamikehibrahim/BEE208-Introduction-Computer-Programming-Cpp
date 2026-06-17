#include <iostream>
using namespace std;

int main() {
	int V1;
	int V2;
	int larger;
	
	cout << "DETERMINING WHICH INTEGER IS LARGER " << "\n";
	cout << "\n";
	cout << "Enter first integer: "; cin >> V1;
	cout << "Enter second integer: "; cin >> V2;
	cout << "\n";
	
	larger=(V1>V2)? V1:V2;
	if(larger==V1){
		cout << "VERDICT: The first integer ("<<larger<<") is larger";
	}else{
		cout << "VERDICT: The second integer ("<<larger<<") is larger";
	}
	
	return 0;
	
}
