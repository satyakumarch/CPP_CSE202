#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//class name:rectangle
class rectangle{
	private:
		double length;
		double breadth;
	public:
		//parameterized constructor
		rectangle(double l,double b){
			length=l;
			breadth=b;
		}
		double calcaulatearea(){
			return length*breadth;
		}
};
int main(){
	int l,b;
	cin>>l;
	cin>>b;
	//creating object to call constructor
	rectangle obj1(l,b);
	//rectangle obj2(l,b);
	
	cout<<"Area of  rectangle 1:"<<obj1.calcaulatearea()<<endl;
	//cout<<"Area of rectangle 2:"<<obj2.calcaulatearea();
	return 0;
}


