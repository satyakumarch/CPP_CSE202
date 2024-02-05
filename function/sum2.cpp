#include<iostream>
using namespace std;

int  methl(int a,int b)
{
	return a+b;
	
}
void methl(int a,int b,int c)
{
	cout<<a+b+c<<endl;
}
doublemethl(double a,double b)
{
	return a+b;
}
int main()
{
methl(101,102,103);
cout<<methl(101,102)<<endl;
cout<<methl(10.5,20.7)<<endl;

return 0;	
}
