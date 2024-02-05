#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 class Complex
 {
 	int a,b,c;
 	public:
 		complex(int a1,int b1){  //parametrized constructor
 		a=a1;
		b=b1; 			
		 }
		 void operator ++(){ //operator overloading function
		 	a=++a;
		 	b=++b;
		 }
		 void operator --(){ //operator overlaoading function
		 	a=--a;
		 	b=--b;
		 }
		 void display(){
		 	cout<<a<<" "<<b<<" i "<<endl;
		 }
 };
 int main()
 {
 	Complex obj(20,15);
 	++obj;
 	cout<<"increment complex number:";
 	obj.display();
 	
 	--obj;
 	
 	cout<<"\nDecrement comlex number\n";
 	obj.display();
 	
 	return ;
 }

