#include<iostream>
using namespace std;
class student{
	public:
		int roll_no;
		string name;
		int reg;
		int phone;
		string address;
		
};
int main(){
	student s1;
	cout<<"Enter your Roll_no:"<<endl;
	cin>>s1.roll_no;
	
	cout<<"Enter your name:"<<endl;
	 cin>>s1.name;
	
	cout<<"Enter your registatio no:"<<endl;
	cin>>s1.reg;
	
	cout<<"Enter phone number:"<<endl;
	cin>>s1.phone;
	
	cout<<"Enter your address:"<<endl;
	cin>>s1.address;
	cout<<"<--student information-->"<<endl;
	cout<<"your roll_no is:"<<s1.roll_no<<endl;
	cout<<"your name is:"<<s1.name<<endl;
	cout<<"your registaion no is:"<<s1.reg<<endl;
	cout<<"your phone number is:"<<s1.phone<<endl;
	cout<<"your address is:"<<s1.address<<endl;
return 0;
}
output
Enter your Roll_no:
12
Enter your name:
satya
Enter your registatio no:
12203506
Enter phone number:
955938521
Enter your address:
nepal
<--student information-->
your roll_no is:12
your name is:satya
your registaion no is:12203506
your phone number is:955938521
your address is:nepal

