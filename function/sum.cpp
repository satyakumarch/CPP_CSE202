//#include<iostream>
//using namespace std;
//int sum(int a,int b){
//	int c=a+b;
//	return c;
//}
//int main(){
//	int num1, num2;
//	cout<<"Enter the number a:";
//	cin>>num1;
//	cout<<"Enter the number b:";
//	cin>>num2;
//	cout<<"The addition of number is:"<<sum(num1,num2)<<endl;
//
//return 0;
//}



#include<iostream>
using namespace std;
 int sum(int a,int b){
 int c=a+b;
 return c;
}
 int sub(int a,int b){
 	int d=a-b;
 	return d;
 }
 int mul(int a,int b){
 	int e=a*b;
 	return e;
 }
 int div(int a,int b){
 	int f=a/b;
 	return f;
 }
 int mod(int a,int b){
 	int g=a%b;
 	return g;
 }	
	


 int main(){
 	int num1,num2;
 	cout<<"Enter the value a:";
 	cin>>num1;
 	cout<<"Enter the value b:";
 	cin>>num2;
 	cout<<"The sum  is:"<<sum(num1,num2)<<endl;
 	cout<<"The sub  is:"<<sub(num1,num2)<<endl;
 	cout<<"The mul  is:"<<mul(num1,num2)<<endl;
 	cout<<"The div  is:"<<div(num1,num2)<<endl;
 	cout<<"The mod  is:"<<mod(num1,num2)<<endl;
 	return 0;
 }




















