#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class myexception{
};
int main(){
	try{
		try{
			throw myexception();
			
		}
		catch (int x){
			cout<<"inner catch block:"<<x<<endl;
			
		}
	}
	catch (myexception& e){
		cout<<"outer catch block"<<endl
	}
	return 0;
}
