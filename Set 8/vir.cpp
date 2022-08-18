#include<iostream>
using namespace std;

class Base {
	public:
		virtual void print () {
			cout << "Base class";
		}
};

class Subclass: public Base {
	public:
		void print () {
			cout << "Sub Class";
		}
};

int main () {
	Base *b;
	Subclass s;
	
	b=&s;
	
	b->print();
	
	return 0;
}
