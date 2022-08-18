#include<iostream>
using namespace std;

class Basic {
	public:
		int id;
		string name;
		
	public:
		void setBasicInfo () {
			cout << "Please enter your id: ";
			cin >> id;
			
			cout << "Please enter your name: ";
			cin >> name;
		}
};

class Professional {
	public:
		int salary;
		string joining_data;
		
	public:
		void setProfessionalInfo () {
			cout << "Please enter your salary: ";
			cin >> salary;
			
			cout << "Please enter your joining_data: ";
			cin >> joining_data;
		}
};

class Employee: public Basic, public Professional {
	public:
		void display () {
			cout << "Id           :" << id << endl;
			cout << "Name         :" << name << endl;
			cout << "Salary       :" << salary << endl;
			cout << "Joining_data :" << joining_data << endl;
		}
};

int main () {
	Employee e;
	
	e.setBasicInfo();
	e.setProfessionalInfo();
	e.display();
	
	return 0;
}
