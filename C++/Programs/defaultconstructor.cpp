#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class default_construct{
	public:
		int a,b;
		default_construct(){
			a=100;
			b=200;
			
		}
};
int main(){
	default_construct con;
	cout<<"value of  a:"<<con.a<<endl;
	cout<<"value of b:"<<con.b;
	return 0;
}


