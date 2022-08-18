#include<iostream>
using namespace std;

void multiTable(int num) {
	int i;
	
	for (i=1; i<=10; i++) {
		cout << num << " x " << i << " = " << num*i << endl;
	}
}

int main () {
	int num, res;
	
	cout << "Please enter number:";
	cin >> num;
	
	multiTable(num);
	
	return 0;
}
