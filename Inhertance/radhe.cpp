#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class b1
{
	public:
		void show_data()
		{
			cout<<"\n in the base  class 1";
		}
};
class b2
{
	public:
		void show_data()
		{
			cout<<"\n in the base class 2";
		}
		
};
class d:public b1,public b2
{
		public:
			d(){
				cout<<"This class d has inheruted from both the  class";
			}
};
int main()
{
	d obj;
	//obj.show_data();
	obj.b2::show_data();
	obj.b1::show_data();
}


