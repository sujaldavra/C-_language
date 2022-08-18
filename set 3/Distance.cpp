#include<iostream>
using namespace std;

class Distance {
	public:
		int f1, i1, f2, i2;
	
	public:
		void readData () {
			cout << "Please enter feet 1: ";
			cin >> f1;
			cout << "Please enter inch 1: ";
			cin >> i1;
			
			cout << "Please enter feet 2: ";
			cin >> f2;
			cout << "Please enter inch 2: ";
			cin >> i2;
		}
		
		void add () {
			int ft, it;
			
			ft = f1 + f2;
			it = i1 + i2;
			
			while (it >= 12) {
				ft++;
				it = it - 12;
			}
			cout << "Total Distance is: " << ft << " " << it << endl;
		}
};

int main () {
	Distance d1;
	d1.readData();
	d1.add();
		
	return 0;
}
