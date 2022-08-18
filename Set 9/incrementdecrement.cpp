#include<iostream>
using namespace std;

class demo {
	public:
		int num;
		
	public:
		demo(int n){
			this->num = n;
		}
		
		void operator ++ () {
			num = num + 5;
			cout << "After increment: "<< num << endl;
		}
		
		void operator -- () {
			num = num - 3;
			cout<< "After decreament: " << num << endl;
		}
};

int main () {
	demo d(3);
	
	++d;
	
	--d;
	
	return 0;
}
