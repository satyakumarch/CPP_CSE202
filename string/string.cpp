#include<iostream>
using namespace std;
//int main(){
//	string s1,s2;
//	s1="high school";
//	s2="welcome to ";
//	cout<<s2+s1;
//}

int main(){
	string s1("man ");
	string s2="beast ";
	string s3;
	s3=s1;
	cout<<"s3:"<<s3<<endl;
	
	s3="neither "+s1+"nor ";
	s3+=s2;
	cout<<"s3:"<<s3<<endl;
	s1.swap(s2);
	cout<<s1<<"nor "<<s2<<endl;
	return 0;
}

