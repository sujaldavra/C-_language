#include<iostream>
using namespace std;

class State {
	public:
		static string state;
	
	public:
	static void serData () {
		cout << "Please neter your state: ";
		cin  >> state;
	}	
	
	static void getData () {
		cout << "state: " << state;
	}
};

string State::state;

int main () {
	
	State::serData();
	State::getData();
	
	return 0;
}
