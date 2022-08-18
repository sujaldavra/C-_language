#include<iostream>
using namespace std;

class Animal {
	public:
		int age;
		string name;
	
	public:
		void set_value () {
			cout << "Please enter age: ";
			cin >> age;
			
			cout << "Please enter name: ";
			cin >> name;
		}
};

class Zebra: public Animal {
	public:
		string place = "US";
		
	public:
		void display () {
			cout << "Name : " << name << endl;
			cout << "Age  : " << age << endl;
			cout << "Place: " << place << endl;
		}
};

class Dolphin: public Animal {
	public:
		string place = "UK";
		
	public:
		void display () {
			cout << "Name : " << name << endl;
			cout << "Age  : " << age << endl;
			cout << "Place: " << place << endl;
		}
};

int main () {
	Zebra z;
	z.set_value();
	z.display();
	
	Dolphin d;
	d.set_value();
	d.display();
	return 0;
}
