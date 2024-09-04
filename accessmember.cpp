#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Line{
	public:
		double length;
		void setlength(double len);
		double getlength(void);
};
//member function definition
double Line::getlength(void){
	return length;
}
void Line::setlength(double len){
	length=len;
}
//main function for the program
int main(){
	Line line;
	line.setlength(6.0);
	cout<<"lenght of line:"<<line.getlength()<<endl;
	
	line.length=10.0;
	cout<<"length of line:"<<line.length<<endl;
	
	return 0;	
}

