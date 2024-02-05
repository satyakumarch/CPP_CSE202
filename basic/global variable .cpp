//#include<iostream>
//using namespace std;
//int main(){
//	int a,b,c;
//	c=20;
//	cout<<"Enter the value of a:"<<endl;
//	cin>>a;
//	
//	cout<<"Enter the value of b:"<<endl;
//	cin>>b;
//	c=a+b;
//	cout<<"The sum  is:"<<c<<endl;
//	
////	cout<<"The global variable of  c is:"<<::c;
//	
//}


#include<iostream>
using namespace std;
int main(){
	float d=34.4F;
	long double e=34.4L;
	
	cout<<"The size of 34.4 is: "<<sizeof(34.4)<<endl;
	cout<<"The size of 34.4f is: "<<sizeof(34.4f)<<endl;
	cout<<"The size of 34.4F is: "<<sizeof(34.4F)<<endl;
	cout<<"The size of 34.4l is: "<<sizeof(34.4l)<<endl;
	cout<<"The size of 34.4L is: "<<sizeof(34.4L)<<endl;
	
}
output
The size of 34.4 is: 8
The size of 34.4f is: 4
The size of 34.4F is: 4
The size of 34.4l is: 16
The size of 34.4L is: 16

