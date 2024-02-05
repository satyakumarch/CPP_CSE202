#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Following are the logical operator in c++:"<<endl;
	cout<<"Enter the number a :"<<endl;
	cin>>a;
	cout<<"Enter the number b :"<<endl;
	cin>>b;
	  
	
	cout<<"The value of this logical operator((a==b)&& (a<b)) is :"<<((a==b)&& (a<b))<<endl;
	cout<<"The value of this logical operator((a==b)|| (a<b)) is :"<<((a==b)|| (a<b))<<endl;
	cout<<"The value of this logical operator(!(a==b)is :"<<(!(a==b))<<endl;
}
output
Following are the logical operator in c++:
Enter the number a :
10
Enter the number b :
5
The value of this logical operator((a==b)&& (a<b)) is :0
The value of this logical operator((a==b)|| (a<b)) is :0
The value of this logical operator(!(a==b)is :1
