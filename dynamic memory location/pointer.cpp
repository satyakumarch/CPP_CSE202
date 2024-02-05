#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class BC{
	public:
		void printBC()
		{
			cout<<"\nprinting message in base class"<<endl;
		}
		void show()
		{
			cout<<"\n show() of baseclass:"<<endl;
		}
};
class DC:public BC
{
	public:
		void printDC()
		{
			cout<<"\n printing message in derived class:"<<endl;
		}
		void show()
		{
			cout<<"\n show() of derived class:"<<endl;
		}
};
int main(){

BC * bptr;
BC base;
bptr=&base;
cout<<"bptr point to base object:";
bptr->show();
bptr=&derived;
cout<<"bptr now point to derived object:";
bptr->printDC();
bptr->show();
DC * dptr;
dptr=&derived;
cout<<"dptr is derived class:";
dptr->show();
dptr->printDC();
}
