#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class classthrow{
	
};
void add()
{
	int a=10,b=0;
	if(a==0|| b==0){
		throw classthrow();
	}
	cout<<"addition"<<a+b;
}
int main()
{
	try{
		add();
	}
	catch(classthrow &c){
		cout<<"exception caught:";
	}
}


