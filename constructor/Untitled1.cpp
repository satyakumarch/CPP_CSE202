#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
		A(int r,int s)
		{
			x=r;
			y=s;
			cout<<"calling base class constructor"<<x<<y;
		}
		~A()
		{
			cout<<"calling base class constructor";
		}
};
class B:class A
{
	int l,m;
	public:
		B(int p,int q,int r,int s):A(r,s)
		{
			p;
			m=q;
			cout<<"calling derived class B constructor"<<l<<m;
		}
}

