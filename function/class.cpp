#include<iostream>
using namespace std;

class student
{
	public:
		int rollno;
		string name;
		public:
			static int cnt;
			student()
			{
				rollno=++cnt;
				
			}
			void getData()
			{
				cout<<"Enter name:"<<endl;
				cin>>name;
			}
			
			
};
int student :: cnt =0;
int main(){

	student s1;
	student s2;
	

	
	cout<<s1.rollno<<endl;
	cout<<s2.rollno<<endl;
	return 0;
	
}

