
//IBM question

 #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
//  class Cube{
//  	private:
//  		double length;
//  		double breadth;
//  		double height;
//  	public:
//  		void setlength(double l){
//  			length=l;
// 		 }
// 		 void setbreadth(double b){
// 		 	breadth=b;
// 		 }
// 		 void setheight(double h){
// 		 	height=h;
// 		 }
// 		 double getvolume(){
// 		 	return length*breadth*height;
// 		 }
//  };
//  int main(){
//  	 Cube cube;
//  	double l,b,h;
//  	cout<<"Enter length:";
//  	cin>>l;
//  	cout<<"Enter breadth:";
//  	cin>>b;
//  	cout<<"Enter height:";
//  	cin>>h;
//  	cube.setlength(l);
//  	cube.setbreadth(b);
//  	cube.setheight(h);
 	
//  	double volume=cube.getvolume();
//  	 cout<<"Volume is:"<<volume<<endl;
// 	  return 0;
// }
	 
// output
// Enter length:10
// Enter breadth:20
// Enter height:30
// Volume is:6000

#include<iostream>
using namespace std;
class Cube{
	private:
	double length;
	double breadth;
	double height;

	public:
	void setlength(double l){
		length=l;
	}
	void setbreadth(double b){
		breadth=b;
	}
	void setheight(double h){
		height=h;
	}
	double getvolume(){
		return length*breadth*height;
	}
};

int main(){
	Cube cube;
	double l,b,h;
	cout<<"Enter the lenght:";
	cin>>l;
	cout<<"Enter the breadth:";
	cin>>b;
	cout<<"Enter the height: ";
	cin>>h;

	cube.setlength(l);
	cube.setbreadth(b);
	cube.setheight(h);



	double volume=cube.getvolume();
	cout<<"volume is : "<<volume;

}