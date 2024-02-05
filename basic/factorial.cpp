#include<iostream>
using namespace std;

   int fib(int n){
   	if(n<2){
   		return 1;
	   }
   	return fib(n-2)+fib(n-1);
   }
	int factorial(int n){
		if(n<=1){
			return 1;
		}
		return n* factorial(n-1);
	}
	int main(){
		int a;
		cout<<"Enter the number:";
		cin>>a;
		 cout<<"The factorial of "<<a<<" is:"<<factorial(a)<<endl;
		 cout<<endl;
		cout<<"The fib of "<<a<<" is:"<<fib(a)<<endl;
}
	


