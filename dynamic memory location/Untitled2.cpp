#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
class Employee
{
	int id;
	float salary;
	public:
		void input()
		{
			cout<<"\n Enter id: ";
			cin>>id;
			cout<<"\n Enter salary: ";
			cin>>salary;
		}
		void display()
		{
			cout<<"\n"<<id<<" "<<salary;
		}
};
int main()
{
	int n;
	cout<<"\n Enter number of employees: ";
	cin>>n;
	Employee *p=new Employee[n];
	Employee *d=p;
	Employee *flag=p;
	if(p==NULL)
	{
		cout<<"\n Memory allacation failure ";
		exit(1);
	}
	for (int i=0;i<n;i++)
	{
		p->input();
		//(*p).input();
		p++;
	}
	for(int i=0;i<n;i++)
	{
		d->display();
		d++;
	}
	delete[]flag;
	return 0;
}
// Enter number of employees: 4
//
// Enter id: 10
//
// Enter salary: 123145
//
// Enter id: 13
//
// Enter salary: 5465
//
// Enter id: 21
//
// Enter salary: 25465
//
// Enter id: 245
//
// Enter salary: 1654
//
//10 123145
//13 5465
//21 25465
//245 1654
