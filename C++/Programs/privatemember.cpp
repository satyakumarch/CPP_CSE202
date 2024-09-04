#include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// class Box{
// 	public:
// 		double length;
// 		void setwidth(double wid);
// 		double getwidth(void);
		
// 	private:
// 		double width;
// };
// //member function defination
// double Box::getwidth(void){
// 	return width;
// }
// void Box::setwidth(double wid){
// 	width=wid;
// }
// //main function for the program
// int main(){
// 	Box box;
// 	box.length=10.0;
// 	cout<<"length of box:"<<box.length<<endl;
// 	box.setwidth(10.0);
// 	box.setwidth(10.0);
// 	cout<<"width of box:"<<box.getwidth()<<endl;
// 	return 0;
// }


#include<iostream>
using namespace std;
class Box{
	public:
	double length;
	void setwidth(double wid);
	double getwidth(void);
	private:
	double width;
};
double Box::getwidth(double wid){
	width=wid;
}
int main(){
	Box box;
	box.length=10.0;
	cout<<box.length<<endl;
	box.setwidth(10.0);
	box.setwidth(10.0);
	cout<<box.getwidth()<<endl;
	return 0;


}