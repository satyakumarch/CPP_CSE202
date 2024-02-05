#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char s[30];
	ofstream fileout;
	fstream file;
	fileout.open("hello",ios::out);
	fileout<<"hello world to programming.";
	fileout.close();
	
	file.open("hello",ios::in|ios::out);
	cout<<file.tellg();
	cout<<endl;
	cout<<file.tellp();
	file.seekp(9);
	cout<<endl;
	file.seekg(14);
	
	cout<<file.tellg();
	cout<<endl;
	cout<<file.tellp()	;
	file>>s;
	cout<<endl;
	cout<<s<<endl;
		return 0;
}
//output
//0
//0
//6
//6

