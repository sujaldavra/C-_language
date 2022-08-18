#include<iostream>
using namespace std;

class Mother {
	public:
		void display () {
			cout << "Mother class" << endl;
		}
};

class Daughter:public Mother {
	public:
		void dispaly () {
			cout << "Daughter class" << endl;
			Mother::display();
		}
};

int main () {
	Daughter d;
	d.dispaly();
	
	return 0;
}
