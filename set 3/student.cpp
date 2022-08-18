#include<iostream>
using namespace std;

class student {
	public:
		int id;
		float per;
	
	public:
		void readData () {
			cout << "Please enter id: ";
			cin >> id;
			
			cout << "Please enter percentage: ";
			cin >> per;
		}
		
		void Dispaly () {
			cout << "Id: " << id << endl;
			cout << "Percentage: " << per << endl;
		}
};

int main () {
	student s1, s2;
	s1.readData();
	s1.Dispaly();
	
	s2.readData();
	s2.Dispaly();
	
	return 0;
}
