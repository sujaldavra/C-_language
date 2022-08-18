#include<iostream>
using namespace std;

class classA{
	public:
	int id,salary;
  	string name,comp_name,address,email,contactnum,role,experience;

	public:
    	void setdataA(){
    		cout<<"Please enter id: ";
    		cin>>id;
   
    		cout<<"Please enter name: ";
    		cin>>name;
    
    		cout<<"Please enter role: ";
    		cin>>role;
		}
};

class classB:public classA{
	public:
		void setdataB(){
			cout<<"Please enter salary: ";
    		cin>>salary;
   
    		cout<<"Please enter experience: ";
    		cin>>experience;
		}
};

class classC:public classB{
	public:
		void setdataC(){
			cout<<"Please enter company name: ";
    		cin>>comp_name;
   
    		cout<<"Please enter address: ";
    		cin>>address;
		}

		void getdataC(){
			cout<<"Name: "<<name<<endl;
			cout<<"Role: "<<role<<endl;
			cout<<"Salary: "<<salary<<endl;
		}
};

class classD:public classC{
	public:
		void setdataD(){
			cout<<"Please enter company E-mail: ";
    		cin>>email;
   
    		cout<<"Please enter company contact number: ";
    		cin>>contactnum;
		}

		void getdataD(){
			cout<<"Name          : "<<name<<endl;
			cout<<"Id            : "<<id<<endl;
			cout<<"Role          : "<<role<<endl;
			cout<<"Salary        : "<<salary<<endl;
			cout<<"Experience    : "<<experience<<endl;
			cout<<"Company name  : "<<comp_name<<endl;
			cout<<"Address       : "<<address<<endl;
			cout<<"E-mail        : "<<name<<endl;
			cout<<"Contact number: "<<contactnum<<endl;
		}
};

int main (){
	classD d1;
	d1.setdataA();
	d1.setdataB();
	d1.setdataC();
	d1.setdataD();
	d1.getdataD();

return 0;
}
