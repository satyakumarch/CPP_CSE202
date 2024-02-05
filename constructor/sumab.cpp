#include<iostream>
using namespace std;
 class Complex{
 	int a,b;
 	public:
 		//creating a constructor
 		//constructor is a special funtion with same name as of the class.
 		//it is automatically invoked whenever an object is created.
 		//it is used to initalize the object of its class
 		Complex(void);//constructor declaration
 		void printNumber()
 		{
 			cout<<"your number is: "<<a<<"+"<<b<<"i"<<endl;
		 }
 		
};
 Complex ::Complex(void){//-------->default constructor it take no p arameter
 	a=10;
 	b=20;
 //	cout<<"hello world"<<endl;
 }
 int main(){
 	Complex c,c1,c2,c3;
 	c.printNumber();
 	c1.printNumber();
 	c2.printNumber();
 	c3.printNumber();
 	return 0;
 }
