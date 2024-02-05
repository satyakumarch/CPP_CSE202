#include<iostream>
#include<fstream>
using namespace std;
int main(){
	const int n=80;
	char s[n];
	ifstream fin;
	fin.open("country.txt");
	while(fin){
		fin.getline(s,n);
		cout<<s;
		cout<<endl;
		
	}
	fin.close();
	fin.open("capiltal.txt");
	while(fin)
	{
		fin.getline(s,n);
		cout<<s;
		cout<<endl;
	}
	fin.close();
	return 0;
}

