#include<iostream>
using namespace std;

class Building {
	public:
		int l, w;
		
	public:
		Building (int len, int wid) {
			l = len;
			w = wid;
		}
		
		void area () {
			cout << "area is: " << l*w << endl;
		}
};

int main () {
	Building b1 (100, 200);
	Building b2 (500, 300);
	
	b1.area();
	b2.area();
	
	return 0;
}
