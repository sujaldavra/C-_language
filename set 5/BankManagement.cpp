#include<iostream>
using namespace std; 

class Bank{
    public:
        int acc_num ,amm ,transfer ,withdraw;
        string name , phone ,email ;
        
    public:
        void setData(){
            cout<<"please enter the name of Staff: ";
            cin>>name; 
            
            cout<<"please enter the account numebr of Staff: ";
            cin>>acc_num; 
            
            cout<<"please enter the phone number of saff:" ;
            cin>>phone ;
            
            cout<<"please enter the e-mail of Staff: ";
            cin >>email ;
        }
        
        void getData(){
            cout<<endl<<endl; 
            cout<<"\t\t\t\tEnter The Name Of Staff :"<<name<<endl;
            cout<<"\t\t\t\tEnter The Account Number Of Staff :"<<acc_num<<endl;
            cout<<"\t\t\t\tEnter The Phone Number Of Staff :"<<phone<<endl;
            cout<<"\t\t\t\tEnter The E-Mial Of Staff :"<<email<<endl;
            
        }
        
        void print(){
        cout<<"-----------------------------------------------------------------"<<endl;
        cout<<"Name     :"<<name<<endl;
        cout<<"Account No   :"<<acc_num<<endl;
        cout<<"E-Mail       :"<<email<<endl;
        cout<<"Phone        :"<<phone<<endl;
        cout<<"-----------------------------------------------------------------"<<endl;
        }
        
        void setDeposite(){
            cout<<"Please Enter Ammount to Deposite: ";
            cin>>amm;
        }
        
        void getDeposite(){
            cout<<"------------------------------------------------------------------------------------------------------"<<endl;
            cout<<"\t\t\t\t\tDeposite the Money : "<<amm<<endl;
            cout<<"------------------------------------------------------------------------------------------------------"<<endl;
            cout<<"\t\t\t\t\tYour Actual Amount Is : 200000"<<endl<<endl;
            cout<<"\t\t\t\t\tCongrats Your Amount Has Deposite Suceesfully."<<endl<<endl;
            cout<<"\t\t\t\t\tYour Account Balance is : "<<(200000+amm)<<endl;
        }
        
        void setTransfer(){
            cout<<"Please Enter Ammount to Transfer : ";
            cin>>transfer;
        }
        
        void getTransfer(){
            cout<<"------------------------------------------------------------------------------------------------------"<<endl;
            cout<<"\t\t\t\t\tTransfer the Money : "<<transfer<<endl;
            cout<<"------------------------------------------------------------------------------------------------------"<<endl;
            cout<<"\t\t\t\t\tYour Actual Amount Is : 200000"<<endl<<endl;
            cout<<"\t\t\t\t\tCongrats Your Amount Has Transfer Suceesfully."<<endl<<endl;
            cout<<"\t\t\t\t\tYour Account Balance is : "<<(200000-transfer)<<endl;
        }
        
        void setWithdraw(){
            cout<<"Please Enter Ammount to Withdraw : ";
            cin>>withdraw;
        }
        
        void getWithdraw(){
            cout<<"------------------------------------------------------------------------------------------------------"<<endl;
            cout<<"\t\t\t\t\tWithdraw the Money : "<<withdraw<<endl;
            cout<<"------------------------------------------------------------------------------------------------------"<<endl;
            cout<<"\t\t\t\t\tYour Actual Amount Is : 200000"<<endl<<endl;
            cout<<"\t\t\t\t\tCongrats Your Amount Has Withdraw Suceesfully."<<endl<<endl;
            cout<<"\t\t\t\t\tYour Account Balance is : "<<(200000-withdraw)<<endl;
        }
        
};



int main(){
    
    cout<<"\t\t\t\t\t\t-: BANK MANAGMENT SYSTEM :-"<<endl;
    cout<<"\t\t\t\t\t\t--------------------------"<<endl;
    cout<<"\t\t\t\t\t      -: designed N programed by :-"<<endl;
    cout<<"\t\t\t\t\t\t--------------------------"<<endl;
    cout<<"\t\t\t\t\t\t    -: SUJAL DAVRA :-"<<endl<<endl;
    cout<<"\t\t\t\t\t\t       -: Trianer:-"<<endl;
    cout<<"\t\t\t\t\t\t--------------------------"<<endl;
    cout<<"\t\t\t\t\t\t      -: ANKIT BAHI :-"<<endl<<endl;
    cout<<"\t\t\t\t\t    PRESS ANY KEY N ENTER TO CONTINUE..."<<endl;
    
    cout<<"\t\t\t\t\t\t--------------------------"<<endl;
    cout<<"\t\t\t     -: Press A to log in as Administration Or S to Log in as STAFF :-"<<endl;
    cout<<"\t\t\t\t\t\t--------------------------"<<endl;
    
    char a;
    
    cin>>a;
    
    if(a == 'S' or 's' ){
        Bank b ; 
        
        cout<<"\t\t\t     -----------------------------------------------------------------"<<endl; 
        cout<<"\t\t\t\t\t\t -: Welcome as STAFF :-"<<endl;
        cout<<"\t\t\t     -----------------------------------------------------------------"<<endl; 
        
        b.setData();
        b.getData();
        b.print();
        
        cout << "\n\n";
        
        cout<<"\t\t\t\t\t\t Press [1] to Deposite the money :  "<<endl<<endl;
        cout<<"\t\t\t\t\t\t Press [2] to Transfer the money :  "<<endl<<endl;
        cout<<"\t\t\t\t\t\t Press [3] to Withdraw the money :  "<<endl<<endl;
        
        int n ;
        cout<<" Please enter the Key Here: ";
        cin>>n;
        
        if(n == 1){
            Bank a1;
            
            a1.setDeposite();
            a1.getDeposite();
            
            
        }else if(n == 2){
            Bank a2; 
            
            a2.setTransfer();
            a2.getTransfer();
            
        }else if(n == 3 ){
            Bank a3; 
            
            a3.setWithdraw();
            a3.getWithdraw();
            
        }else {
            cout<<"Invalid Input ";
        }
        
        
    }else{
        cout<<"Invalid Input"<<endl;
    }
    
    return 0;
}

