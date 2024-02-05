#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Tell me your age:"<<endl;
	cin>>age;
	if(age<18){
		cout<<"you are not come to my party:"<<endl;
	}
	else if(age==18){
		cout<<"you are come to my party and take passcard:"<<endl;
	}
	else{
		cout<<"you are come to my party:"<<endl;
	}
}
