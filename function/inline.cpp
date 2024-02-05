#include<iostream>
using namespace std;
void display(int a){
	cout<<"The output of inline function is:"<<a<<endl;
}
int main(){
	int a;
	cout<<"Enter the  number:";
	cin>>a;
	display(a);
return 0;
}

