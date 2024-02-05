#include<iostream>
using namespace std;
int main(){
	int a=3;
	int* b=&a;
	cout<<"The address of a is:"<<&a<<endl;
	cout<<"The address of a is:"<<b<<endl;
	
	//deference operator
	cout<<"The value of a is:"<<*b<<endl;
	
	//pointer to pointer
	
	int** c=&b;
	cout<<"The address of b is:"<<&b<<endl;
	cout<<"The address of b is:"<<c<<endl;
	cout<<"The value at address c is :"<<*c<<endl;
	cout<<"the value at address value_at(value_at(c)) is:"<<**c<<endl;
	return 0;
}
