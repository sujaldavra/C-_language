#include<iostream> 
using namespace std;

class Train{
	public:
		int train_number; 
		string train_name , source , destination , train_time;
		
	public:
		void setData () {
			cout << "Please enter Train Number: ";
			cin >> train_number;
			
			cout << "Please enter Train Name: ";
			cin >> train_name;
			
			cout << "Please enter Source: ";
			cin >> source;
			
			cout << "Please enter Destination: ";
			cin >> destination;
			
			cout << "Please enter Train Time: ";
			cin >> train_time;
		}
		
		void getData () {
			cout << "Train Number :" << train_number << endl;
			cout << "Train Name   :" << train_name << endl;
			cout << "Source       :" << source << endl;
			cout << "Destination  :" << destination << endl;
			cout << "Train Time   :" << train_time << endl;
		}
};

int main () {
	int n, i, tn;
	Train t[50];
	
	cout << "Please enter number of train records: ";
	cin >> n;
	
	if (n >= 3) {
		for (i=0; i<n; i++) {
			t[i].setData();
		}
		
		cout << "Please enter number of train to display  its record: ";
		cin >> tn;
		
		for (i=0; i<n; i++) {
			if (t[i].train_number == tn) {
				t[i].getData();
			}
		}
		
	} else {
		cout << "Minimum 3 Records Required.";
	}
	
	
	return 0;
}
