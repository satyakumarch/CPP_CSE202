#include<iostream>
using namespace std;
int sum(int a ,int b){
	return (a+b);
}
int sum(int a,int b ,int c){
	return (a+b+c);
}

int volume(int l,int b,int h){
	return (l*b*h);
}

//float area(int r,int h){
//	return (3.14.16*r*r*h);
//}

int cube(int d){
	int (d*d*d);
}
int lsa(int n){
	return (6*n*n);
}
int main(){
	int x,y,z;
	cout<<"Enter the number:";
	
	cin>>x>>y>>z;
	
	cout<<"The sum of " <<x<< " and " <<y<< " is:"<<sum(x,y)<<endl;
	cout<<"The sum of "<< x <<" and "<< y<< " and "<<z<< " is: "<<sum(x,y,z)<<endl;
	cout<<"The cube " <<x<< " of the given number is: "<<cube(x*x*x)<<endl;
	cout<<"The volume of the given number is: "<<volume(x,y,z)<<endl;
	cout<<"The lsa of the number is: "<<lsa(x);
	//cout<<"The area of the given number is"<<area(x,y)<<endl;
	
return 0;
}

