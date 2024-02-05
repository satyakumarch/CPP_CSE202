#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
	class student
	{
		string name;
		int roll_no;
		float marks;
		public:
			void getdata()
			{
				cout<<"Enter name:"<<endl;
				getline(cin,name);

				cout<<"Enter roll_no:"<<endl;
				cin>>roll_no;
				cout<<"Enter marks:"<<endl;
				cin>>marks;
			}
			void putdata()
			{
				cout<<"your name is:"<<name<<endl;
				cout<<"your roll_no:"<<roll_no<<endl;
				cout<<"your mark is:"<<marks<<endl;
			}
	};
	int main(){
		student ob1,ob2;
		ob1.getdata();
		fstream file;
		file.open("data",ios::in|ios::out);
		file.write((char *)&ob1,sizeof(ob1));
		
		file.seekg(0);
		file.read((char*)&ob2,sizeof(ob2));
	 ob2.putdata();


}
//output
//Enter name:
//satya
//Enter roll_no:
//23
//Enter marks:
//45
//your name is:satya
//your roll_no:23
//your mark is:45

