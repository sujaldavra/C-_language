#include<iostream>
using namespace std;

class College {
	public:
		static int id, stu_roll_no, stu_standard, stu_age;
		static string stu_name, stu_contact, stu_edu_institute_name, stu_address;
	
	public:
		void setData () {
			cout << "Please enter id: ";
			cin >> id;
			
			cout << "Please enter stu_roll_no: ";
			cin >> stu_roll_no;
			
			cout << "Please enter stu_standard: ";
			cin >> stu_standard;
			
			cout << "Please enter stu_age: ";
			cin >> stu_age;
			
			cout << "Please enter stu_name: ";
			cin >> stu_name;
			
			cout << "Please enter stu_contact: ";
			cin >> stu_contact;
			
			cout << "Please enter stu_edu_institute_name: ";
			cin >> stu_edu_institute_name;
			
			cout << "Please enter stu_address: ";
			cin >> stu_address;
		}
		
		void getData () {
			cout << "id                     :" << id << endl;
			cout << "stu_roll_no            :" << stu_roll_no << endl;
			cout << "stu_standard           :" << stu_standard << endl;
			cout << "stu_age                :" << stu_age << endl;
			cout << "stu_name               :" << stu_name << endl;
			cout << "stu_contact            :" << stu_contact << endl;
			cout << "stu_edu_institute_name :" << stu_edu_institute_name << endl;
			cout << "stu_address            :" << stu_address << endl;
		}
};

int College::id;
int College::stu_roll_no;
int College::stu_standard;
int College::stu_age;
string College::stu_name;
string College::stu_contact;
string College::stu_edu_institute_name;
string College::stu_address;

class HighSchool {
	public:
		void Display () {
			College c;
			
			c.setData();
			c.getData();
		}
};

int main () {
	HighSchool h;
	
	h.Display();
	
	
	return 0;
}
