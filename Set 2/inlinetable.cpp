#include<iostream>
using namespace std;

inline void table (int n) {
	int i;
	
	for (i=1; i<=10; i++) {
		cout << n << " x " << i << " = " << n*i << endl;
	}
}

int main () {
	int num;
	
	cout << "Please neter number: ";
	cin >> num;
	
	table(num);
	
	return 0;
}
