#include<iostream>
using namespace std;

class SuperMarket {
	public:
		int item_number, quantity, tax, discount;
		string item_name;
		
	public:
		void setData () {
			cout << "Please enter item number: ";
			cin >> item_number;
			
			cout << "Please enter item quantity: ";
			cin >> quantity;
			
			cout << "Please enter item tax: ";
			cin >> tax;
			
			cout << "Please enter item discount: ";
			cin >> discount;
			
			cout << "Please enter item name: ";
			cin >> item_name;
			
		}
		
		void getData () {
			cout << "item_number:" << item_number << endl;
			cout << "quantity   :" << quantity << endl;
			cout << "tax        :" << tax << endl;
			cout << "discount   :" << discount << endl;
			cout << "item_name  :" << item_name << endl;
		} 
};

int main () {
	int n, i, j;
	string user_id, password;
	
	cout << "Please enter your User id: ";
	cin >> user_id;
	
	cout << "Please enter your Password: ";
	cin >> password;
	
	if (user_id == "123" && password == "abc") {
		SuperMarket s[50], temp;
		
		cout << "Please enter number of items wants to enter: ";
		cin >> n;
		
		for (i=0; i<n; i++) {
			s[i].setData();
		}
		
		for (i=0; i<n; i++) {
			for (j=i+1; j<n; j++) {
				if (s[i].item_number > s[j].item_number) {
					temp = s[i];
					s[i] = s[j];
					s[j] = temp;
				}
			}
		}
		
		for (i=0; i<n; i++) {
			s[i].getData();
		}
		
	} else {
		cout << "Invalid user id or password.";
	}
	
	return 0;
}
