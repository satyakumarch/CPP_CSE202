#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void divide( double x, double y)
{
	cout<<"inside main"<<endl;
	try
	{
if(y==0.0)
throw y;
else
cout<<"division"<<x/y;
}
catch(double)
{
	cout<<"caught double inside function";
	throw;
	
}

cout<<"end of function";
} 
int main()
{
	cout<<"inside main";
	try
	{
		divide(10.5,2.0);
		divide(20.0,0.0);
	}
	catch(double)
	{
		cout<<"caught double inside main";
	}
	cout<<"end of main";
	return 0;
}

