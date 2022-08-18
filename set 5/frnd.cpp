#include<iostream>
using namespace std;

class Add2;
class Add1 {
	public:
		int x;
		
	public:
		void setData() {
			cout << "Please enter valu of x:";
			cin >> x;
		}
		
		friend void addition (Add1 a1, Add2 a2);
}; 

class Add2 {
	public:
		int y;
		
	public:
		void setData() {
			cout << "Please enter valu of y:";
			cin >> y;	
	    }
	    
	    friend void addition (Add1 a1, Add2 a2);
};

void addition (Add1 a1, Add2 a2) {
	cout << a1.x << " + " << a2.y << " = " << a1.x+a2.y;
}


int main () {
	Add1 a1;
	Add2 a2;
	
	a1.setData();
	a2.setData();
	
	addition(a1, a2);
	
	return 0;
}
