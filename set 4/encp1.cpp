#include<iostream> 
using namespace std;

class Read {
	public:
		int id;
		float per;
		
	public:
		void setStudent () {
			cout << "Please enter id: ";
			cin >> id;
			
			cout << "Please enter Percentage: ";
			cin >> per;
		}
};

class Print {
	public:
		void printStudent () {
			Read r;
			
			r.setStudent();
			
			cout << "id        :  " << r.id << endl;
			cout << "Percentage: " << r.per << endl;
		}
};

int main () {
	Print p;
	
	p.printStudent();
	
	return 0;
}
