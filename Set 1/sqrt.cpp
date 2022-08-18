#include<iostream>
#include<cmath>
using namespace std;

int main () {
	int arr[50], n, i;
	
	cout << "Please enter size of an array:";
	cin >> n;
	
	for (i=0; i<n; i++) {
		cin >> arr[i];
	}
	
	cout << "Square root vale is:" << endl;
	
	for (i=0; i<n; i++) {
		cout << sqrt(arr[i]) << endl;
	}
	
	return 0;
}
