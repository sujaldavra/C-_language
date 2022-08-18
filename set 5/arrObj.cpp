#include<iostream> 
using namespace std;

class Students {
	public:
		int id;
		string name;
		
	public:
		void setData () {
			cout << "Please neter id: ";
			cin >> id;
			
			cout << "Please neter name: ";
			cin >> name; 
		}
		
		void getData () {
			cout << "id   :" << id << endl;
			cout << "name :" << name << endl;
		} 
};

int main () {
	int i, n;
	Students s[50];
	
	cout << "Please neter number of students: ";
	cin >> n;
	
	for (i=0; i<n; i++) {
		s[i].setData();
		s[i].getData();
	}

	return 0;
}
