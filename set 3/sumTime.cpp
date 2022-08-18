#include<iostream>
using namespace std;

class Time {
	public:
		int h, m, s;
		
	public:
		void readTime () {
			cout << "Please enter Time in hours: ";
			cin >> h;
			
			cout << "Please enter Time in minute: ";
			cin >> m;
			
			cout << "Please enter Time in second: ";
			cin >> s;
		}
};

int main () {
	Time t1, t2;
	int se, mi, hr;
	
	t1.readTime();
	t2.readTime();
	
	se = t1.s + t2.s;
	mi = t1.m + t2.m + se/60;
	hr = t1.h + t2.h + mi/60;
	
	se = se%60;
	mi = mi%60;
	
	cout << hr << ":" << mi << ":" << se;
	
	return 0;
}
