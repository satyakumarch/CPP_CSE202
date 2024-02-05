#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int  factorial(int n){
	if(n<=1){
		return 1;
	}
	return n* factorial(n-1);
}



int main(){
	int a;
	cout<<"Enter the number:";
	cin>>a;
	cout<<"The factorial of the " <<a<< " is:"<<factorial(a);
}
//Enter the number:5
//The factorial of the 5 is:120
