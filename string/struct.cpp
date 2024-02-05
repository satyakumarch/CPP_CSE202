#include<iostream>
using namespace std;
struct student{
		int roll;
		string name;
		int mark;
		int phone;
		
};

	int main(){
	struct student std;
	cout<<"Enter the roll:"<<endl;
	cin>>std.roll;
	cout<<"Enter the name:"<<endl;
	cin>>std.name;
	cout<<"Enter the mark:"<<endl;
	cin>>std.mark;
	cout<<"Enter the phone:"<<endl;
	cin>>std.phone;
	cout<<endl;
	cout<<"Student detail"<<endl;
	cout<<"Roll no:"<<std.roll<<endl;
	cout<<"name :"<<std.name<<endl;
	cout<<"mark :"<<std.mark<<endl;
	cout<<"phone no:"<<std.phone<<endl;
	
//cout<<"...............write a code satya"
return 0;
}
output
Enter the roll:
34
Enter the name:
satya
Enter the mark:
23
Enter the phone:
3425425

Student detail
Roll no:34
name :satya
mark :23
phone no:3425425
