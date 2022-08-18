#include<iostream>
using namespace std;

int main () {
	char ch;
	
	cout << "Please enter any input:";
	cin >> ch;
	
	if (ch >= '0' && ch <= '9') {
		cout << "Input is Numeric";
	} else {
		cout << "Input is not Numeric";
	}
	
	return 0;
}
