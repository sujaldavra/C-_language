#include<iostream>
using namespace std;

class demo {
	public:
		int a, b;
	
	public:
		void setdata () {
			cout << "please enter the value of a: ";
			cin >> a;
			
			cout << "please enter the value of b: ";
			cin >> b;
		} 
		
		void divide () {
			try {
				if(b == 0){
					throw 0;
				}else{
					cout << "output: " << a/b;
				}
			}catch(...){
				cout<<"divide zero is not possible.";
			}
		}
};

int main () {
	demo d;
	d.setdata();
	d.divide();
	
	return 0;
}
