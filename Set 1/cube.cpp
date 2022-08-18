#include<iostream>
using namespace std;

int main () {
	int arr[5], cube[5], i;
	
	cout << "Please enter array elements:";
	
	for (i=0; i<5; i++) {
		cin >> arr[i];
	}
	
	for (i=0; i<5; i++) {
		cube[i] = arr[i]*arr[i]*arr[i];
	}
	
	cout << "cube of array is:" << endl;
	
	for (i=0; i<5; i++) {
		cout << cube[i] << endl;
	}
	
	return 0;
}
