#include<iostream>
#include  <bits/stdc++.h>
#include<string>
using namespace std;

class satya{
        public:
		int roll;
        string  name;
        string address;
		int phone;
	
};
int main(){
	satya sa;
	sa.roll;
	sa.phone;
	sa.name;
	 sa.address;
	 
	cout<<"Enter roll no:";
	cin>>sa.roll;
	
    cout<<"Enter phone no:";
	cin>>sa.phone;
	
	cout<<"Enter name:";
    cin>>sa.name;
    
   cout<<"Enter your address:";
    cin>>sa.address;
    cout<<"<-----------------output-------------->"<<endl;
    
    cout<<"Roll no is:"<<sa.roll<<endl;
	cout<<"phone number is:"<<sa.phone<<endl;
    cout<<"your name is:"<<sa.name<<endl;
	cout<<"your address is:"<<sa.address<<endl;
	
}
