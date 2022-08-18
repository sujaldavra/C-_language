#include<iostream>
using namespace std;

class Demo {
	public:
		int x;
	
	public:
		Demo () {
			x = 5;
		}
		
		void print () {
			cout << " x:" << x;
		}
};

int main () {
	Demo d;
	
	d.print();
	
	return 0;
}
