#include<iostream>
using namespace std;

class Base {
	public:
		int num;
		
	public:
		void setVal () {
			cout << "Plase enter number: ";
			cin >> num;
		}
};

class Square: public Base {
	public:
		void getSquare () {
			cout << "Square is: " << num*num << endl;
		}
};

class Cube: public Base {
	public:
		void getCube () {
			cout << "Cube is: " << num*num*num << endl;
		}
};

int main () {
	Square s;
	s.setVal();
	s.getSquare();
	
	Cube c;
	c.setVal();
	c.getCube();
	
	return 0;
}
