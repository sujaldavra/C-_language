#include<iostream>
using namespace std;

int main () {
	char str[50];
	int i;
	
	cout << "Please enter string:";
	gets(str);
	
	for (i=0; str[i] != '\0'; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] -32;
		} else if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] +32;
		} else {
			str[i] = str[i];
		}
	}
	
	puts(str);
	
	return 0;
}
