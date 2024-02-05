#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int sum(int a,int b){
	return (a+b);
}

int mul(int a,int b){
	return (a*b);
}
int volume(int a,int b,int c){
	return (a*b*c);
	
}
int cube(int a){
	return (a*a*a);
}
int main(){
	int a,b,c;
	cout<<"Enter the value of a:"<<endl;
	cin>>a;
	cout<<"Enter the value of b:"<<endl;
	cin>>b;
	cout<<"Enter the value of c:"<<endl;
	cin>>c;
	
	cout<<"The sum of "<<a<<" and "<<b<<" is:"<<sum(a,b)<<endl;
	cout<<"The multiplication of "<<a<< " and "<<b<< " is :"<<mul(a,b)<<endl;
	cout<<"The volume of "<<a<<","<<b<<" and "<< c<<" is :"<<volume(a,b,c)<<endl;
	cout<<"The cube of "<<a<<" is :"<<cube(a)<<endl;
	return 0;
}
output
Enter the value of a:
5
Enter the value of b:
1
Enter the value of c:
2
The sum of 5 and 1 is:6
The multiplication of 5 and 1 is :5
The volume of 5,1 and 2 is :10
The cube of 5 is :125


