#include<iostream>
#include<string>
using namespace std;
class Box{
	public:
		double length,width,height;
		Box(){
		length=width=height=-1;
		cout<<"Object created"<<endl;
		}
		Box(double l, double w, double h)
		{
			length=l; width=w; height=h;
			cout<<"Object created using parameterized const"<<endl;
		}
		Box(double v)
		{
			length=width=height=v;
			cout<<"3rd constructor"<<endl;
		}
		Box( Box &b)
		{
			length=b.length;
		}
		void display()
		{
			cout<<length<<" "<<width<<" "<<height<<endl;
		}
		double getVolume()
		{
			return length*width*height;
		}
	
};
int main(){
	Box b1;
	 b1.display();
	 
	cout<<b1.getVolume()<<endl;
	 Box b1.length;
	cin>>b1.breadth;
	 b1.display();
	 
	 Box b.breadth;
	cin>>b.breadth;
	 b1.display();
	 
	 Box b1.height;
	cin>>b1.height;
	 b1.display();
	 
	cout<<b1.getVolume()<<endl;
	Box b2(length);
	 b2.display();
	 
	cout<<b2.getVolume()<<endl;
	Box b3(b1);
	b3.display();
	
	cout<<b3.getVolume()<<endl;
	b1.display();
		return 0;
}
