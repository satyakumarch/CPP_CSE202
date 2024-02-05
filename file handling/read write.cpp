#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream fout;
	fout.open("country.txt");
	fout<<"india"<<endl;
	fout<<"USA"<<endl;
	fout<<"nepal"<<endl;
	fout.close();
	
//ofstream fout;
	fout.open("capital.txt");
	fout<<"Delhi"<<endl;	
	fout<<"washington"<<endl;	
	fout<<"kathmandu"<<endl;
	fout.close();
	
		//ifstream fin;
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

