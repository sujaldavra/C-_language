#include<iostream>
using namespace std;

class Message {
	private:
		string m;
		
	public:
		Message (string s) {
			m = s;
		}
		
		void print () {
			cout << "Message:" << m << endl;
		}
		
		void print (string city) {
			cout << "Message: " << m << endl;
			cout << "city: " << city << endl;
		}
};

int main () {
	Message m ("Hello");
	m.print();
	m.print("Surat");
	
	return 0;
}
