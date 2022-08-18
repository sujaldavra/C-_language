#include<iostream>
using namespace std;

class Demo {
	public:
		void print () {
			cout << "Welcome:" << endl;
		}
		
		void print (int id) {
			cout << "id: " << id << endl;
		}
		
		void print (int year, int exp) {
			cout << "Year: " << year << endl;
			cout << "Experiance: " << exp << endl;
		}
		
		void print (int join_day,  int join_month, int join_year) {
			cout << "Joining Date: " << join_day << "-" << join_month << "-" << join_year << endl;
		}
};

int main () {
	Demo d;
	d.print();
	d.print(101);
	d.print(2022, 10);
	d.print(1, 1, 2020);
	
	return 0;
}
