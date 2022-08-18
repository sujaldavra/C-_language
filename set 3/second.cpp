#include<iostream>
using namespace std;

class Time {
	public:
		int s;
		
	public:
		void readSecond () {
			cout << "Please enter seconds: ";
			cin >> s;
		}
};

int main () {
	Time t;
	int hr, mi, se, temp;
	
	t.readSecond();
	
	hr = t.s/3600;
	temp = t.s%3600;
	mi = temp/60;
	se = temp%60;
	
	cout << hr << ":" << mi << ":" << se;
	
	return 0;
}
