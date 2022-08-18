#include<iostream> 
using namespace std;

class Employee {
	public:
		int id, salary, experience;
		string name, role, address, email , contact;
		
	public:
		void setEmployee () {
			cout << "Please enter id: ";
			cin >> id;
			
			cout << "Please enter salary: ";
			cin >> salary;
			
			cout << "Please enter experience: ";
			cin >> experience;
			
			cout << "Please enter name: ";
			cin >> name;
			
			cout << "Please enter role: ";
			cin >> role;
			
			cout << "Please enter address: ";
			cin >> address;
			
			cout << "Please enter email: ";
			cin >> email;
			
			cout << "Please enter contact: ";
			cin >> contact;
		}
		
	void getEmployee ()	{
		cout << "id:         " << id << endl;
		cout << "salary:     " << salary << endl;
		cout << "experience: " << experience << endl;
		cout << "name:       " << name << endl;
		cout << "role:       " << role << endl;
		cout << "address:    " << address << endl;
		cout << "email:      " << email << endl;
		cout << "contact:    " << contact << endl;
	}
};

int main () {
	Employee e1, e2, e3, e4, e5;
	
	e1.setEmployee();
	e1.getEmployee();
	
	e2.setEmployee();
	e2.getEmployee();
	
	e3.setEmployee();
	e3.getEmployee();
	
	e4.setEmployee();
	e4.getEmployee();
	
	e5.setEmployee();
	e5.getEmployee();
		
	return 0;
}
