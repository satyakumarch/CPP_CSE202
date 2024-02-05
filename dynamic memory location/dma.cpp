#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	int *p=NULL;
	p=new int;
//	{
//		cout<<"\n memory allocation failure:";
//		exit(1);
//	}
	if(p==NULL)
	{
		cout<<"\n memory  allocation failure:";
		exit(1);
	}
	else
	{
		cout<<"\nmemory allocated:\n";
		*p=12;
		cout<<"integer value stored is:"<<*p;
		delete p;
		cout<<"\n memory deallocated";
	}
	return 0;
}

