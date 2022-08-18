#include<iostream>
using namespace std;

class car {
	public:
		void handlexception () {
			cout <<"exception genrate.";
		}
};

class motor {
	public:
		void handlexception () {
			throw 0;
		}
};

class garage:public car, public motor {
	public:
		garage () {
			try{
				genrate exception ();
			} catch(...){
				handlexception();
			}
		}
};

int main () {
	
	garage g;
	
	return 0;
}
