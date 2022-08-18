#include<iostream>
using namespace std;

void swap (int *arr1, int *arr2, int n) {
	int temp, i;
	
	for (i=0; i<n; i++) {
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}


int main () {
	int arr1[50], arr2[50], n, i;
	
	cout << "Please enter size of an array:";
	cin >> n;
	
	cout << "Please enter elements of array 1: ";
	for (i=0; i<n; i++) {
		cin >> arr1[i];
	}
	
	cout << "Please enter elements of array 2: ";
	for (i=0; i<n; i++) {
		cin >> arr2[i];
	}
	
	swap (arr1, arr2, n);
	
	cout << "Array 1:" << endl;
	for (i=0; i<n; i++) {
		cout << arr1[i] << endl;
	}
	
	cout << "Array 2:" << endl;
	for (i=0; i<n; i++) {
		cout << arr2[i] << endl;
	}
	
	return 0;
}
