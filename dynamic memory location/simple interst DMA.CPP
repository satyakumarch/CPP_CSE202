#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	float *p=NULL;
	float *r=NULL;
	float *t=NULL;
	float *si=NULL;
    p=new float;
    r=new float;
    t= new float;
    si=new float;
    if(p==NULL || r==NULL|| t==NULL||si==NULL)
    {
    	cout<<"\n memory allocation failure:";
    	exit(1);
	}
	cout<<"\n Enter principle ,rate and time:";
	cin>>*p>>*t>>*r;
	*si=(0.01)*(*p)*(*t)*(*r);
	cout<<"\n simple interest is:"<<*si;
//	delete p;
//	delete r;
//	delete t;
//	delete si;

	return 0;
}
//output
//
// Enter principle ,rate and time:10 20 100
//
// simple interest is:200
