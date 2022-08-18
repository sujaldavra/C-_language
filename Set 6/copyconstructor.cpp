#include<iostream>
using namespace std;

class Demo {
	public:
		int x, y;
		
	public:
		Demo (int x, int y) {
			this -> x = x;
			this -> y = y;
		}
		
		Demo (Demo &d) {
			cout << "x: " << d.x << endl;
			cout << "y: " << d.y << endl;
		}
};

int main () {
	Demo d1(10, 20);
	Demo d2(d1);
	
	return 0;
}
