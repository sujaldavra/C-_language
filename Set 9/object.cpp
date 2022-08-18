#include<iostream>
using namespace std;

class demo {
	public:
		int d;
		
	public:
		demo(){
			this->d = 0;
		}
		
		demo(int d){
			this->d = d;
		}
		
		demo operator + (demo & d2){
			demo d3;
			d3.d = this->d + d2.d;
			return d3;
		}
};
int main () {
	demo d1(10);
	demo d2(20);
	demo d3;
	
	d3 = d1 + d2;
	
	cout << d3.d;
	
	return 0;
}
