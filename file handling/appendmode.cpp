#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char s[200];
	ofstream fileout;
	ifstream filein;
	fileout.open("data.txt",ios::app);
	fileout<<"hello world"<<endl;
	
	fileout.close();
	filein.open("data.txt",ios::in);
	while(filein.eof()==0){
	filein.getline(s,30);
	cout<<s<<endl;
	}

	//return 0;
}
//output
//hello world

