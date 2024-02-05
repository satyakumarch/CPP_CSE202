	#include<iostream>
	#include<fstream>
	using namespace std;
	int main(){
	char s[10];
	ifstream inf("result.txt");
	inf>>s;
	inf.close();
	cout<<s<<endl;
	return 0;	
	}
	
