#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string s="well come to java programming:";
	int len =s.length();
	fstream file;
	file.open("test.txt",ios::in|ios::out);
	for(int i=0;i<len;i++)
	file.put(s[i]);
	file.seekg(0);
	file.seekg(-4,ios::end);//ing:
	cout<<endl;
	file.seekg(-4,ios::cur);//ramming:
	cout<<endl;
	file.seekg(4,ios::beg);//come to java programming:
	//file.seekg(-4,ios::end);
	char ch;
	file.get(ch);
	while(file.eof()==0)
	{
		cout<<ch;
		file.get(ch);
	}
return 0;
}
//output
//well come to java programming:

