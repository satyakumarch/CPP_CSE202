
#include<iostream>
using namespace std;

int sumOfNums(int a, int b, int c=10,int d=20)
{
	return a+b+c+d;   
}
int main(){
	cout<<sumOfNums(12,14,15,16)<<endl;
	cout<<sumOfNums(11,12,13)<<endl;
	cout<<sumOfNums(11,12)<<endl;
	return 0;
}
