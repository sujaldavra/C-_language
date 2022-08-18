#include<iostream>
using namespace std;

class Demo {
	public:
		int id = 10;
		
	public:
		Demo () {
			cout << "Constructor is called." << endl;
		}
		
		~Demo () {
			cout << "deconstructor is called.";
		}
		
		void print () {
			cout << "id: " << id << endl;
		}
};

int main () {
	Demo d;
	d.print();
	
	return 0;
}
