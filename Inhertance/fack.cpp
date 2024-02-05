#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class base{
	protected:
		int a,b;
		public:
			void  getdata(){
				cout<<"Enter the value of a :"<<endl;
				cin>>a;
				cout<<"Enter the value of  b:"<<endl;
				cin>>b;
			}
			void showdata(){
				cout<<"a="<<a<<endl<<"b="<<b<<endl;
			}
};
class derived:public base{
	public:
		int m,n;
		void input(){
			cout<<"Enter the value of m:"<<endl;
			cin>>m;
			cout<<"Enter the value of  n:"<<endl;
			cin>>n;
		}
		void display(){
			cout<<"m="<<m<<endl<<"n="<<n<<endl;
		}
};
int main(){
	base b1;
	derived d1;
	b1.getdata();
	b1.showdata();
	d1.input();
	d1.display();
	d1.getdata();
	d1.showdata();
}

