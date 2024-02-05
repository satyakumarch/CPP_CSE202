#include<iostream>
#include<string>
using namespace std;
int main(){
	string str="welcome";
	cout<<"size:"<<str.size()<<endl;
	cout<<"length:"<<str.length()<<endl;
	cout<<"max size:"<<str.max_size();
	cout<<"Empty:"<<(str.empty()?"yes":"No")<<endl;
	}
	output
	size:7
length:7
max size:4611686018427387897Empty:No
