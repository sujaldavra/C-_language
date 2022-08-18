#include<iostream>
using namespace std;

class demo {
	private:
		int id;
		
	public:
		void getid () {
			cout << "Please enter id: ";
			cin >> id;
		}
		
		void display () {
			cout << id;
		}
};

int main () {
	demo d;
	
	d.getid();
	d.display();
	
	return 0;
}
