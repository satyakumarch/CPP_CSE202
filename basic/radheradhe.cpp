#include<iostream>
using namespace std;
int main(){
	ifstream fin;
	fin.open("country.txt");
	while(fin.eof()==0)
	{
		fin.getline(s,n);
		cout<<s<<endl;
		
	}
	fin.close();
	fin.open("capiltal.txt");
	cout<<endl;
	while(fin.eof()==0)
	{
		fin.getline(s,n);
		cout<<s<<endl;
		
	}
	fin.close();
return 0;
}

