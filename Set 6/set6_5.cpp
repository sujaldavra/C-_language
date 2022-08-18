#include<iostream>
using namespace std;

class Student {
	public:
		int id;
		string name, course;
		
	public:
		Student () {
			cout << "Student' Information." << endl;
		}
		
		Student (int id, string name, string course) {
			id = id;
			name = name;
			course = course;
		}
		
		Student (Student &s) {
			cout << endl << "id:" << s.id << endl;
			cout << "Name: " << s.name << end
		}
};

int main () {
	Student s;
	Student s1(102, "Ankit");
	Student s2(s1);
		
	return 0;
}
