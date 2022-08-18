#include<iostream>
using namespace std;

int main () {
	char ch;
	
	cout << "Please enter any character:";
	cin >> ch;
	
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
		cout << ch << " Vowel";
	} else {
		cout << ch << " Consonant";
	}
	
	return 0;
}
