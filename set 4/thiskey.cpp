#include<iostream>
using namespace std;

class Hotel {
	private:
		int id, room_size, staff_size, establish_year;
		string name, type, address, rating_type, website;
	
	public:	
	    void setData (int id, int room_size, int staff_size, int establish_year , string name, string type, string address, string rating_type, string website) {
	    	this->id = id;
	    	this->room_size = room_size;
	    	this->staff_size = staff_size;
	    	this->establish_year = establish_year;
	    	this->name = name;
	    	this->type = type;
	    	this->address = address;
			this->rating_type = rating_type;
			this->website = website;
		}
		
		void getData () {
			cout << "id             :" << id << endl;
			cout << "Room size      :" << room_size << endl;
			cout << "staff_size     :" << staff_size << endl;
			cout << "establish_year :" << establish_year << endl;
			cout << "name           :" << name << endl;
			cout << "type           :" << type << endl;
			cout << "address        :" << address << endl;
			cout << "rating_type    :" << rating_type << endl;
			cout << "website        :" << website << endl;
		}
};

int main () {
	int id, room_size, staff_size, establish_year;
	string name, type, address, rating_type, website;
	
	Hotel h;
	
	cout << "Please enter id: ";
	cin >> id;
	
	cout << "Please enter room_size: ";
	cin >> room_size;
	
	cout << "Please enter staff_size: ";
	cin >> staff_size;
	
	cout << "Please enter establish_year: ";
	cin >> establish_year;
	
	cout << "Please enter name: ";
	cin >> name;
	
	cout << "Please enter type: ";
	cin >> type;
	
	cout << "Please enter address: ";
	cin >> address;
	
	cout << "Please enter rating_type: ";
	cin >> rating_type;
	
	cout << "Please enter website: ";
	cin >> website;
	
	h.setData(id, room_size, staff_size, establish_year, name, type, address, rating_type, website);
	h.getData();
	return 0;
}
