 #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// class Speed{
// 	public:
// 		Speed(){}
// 		operator double(){
// 		double kmperhour;
// 		cin>>kmperhour;
// 		return kmperhour*1000.0/3600.0;
// 		}
// };
// int main(){
// 	Speed speed;
// 	double speedmeterpersecond=speed;
// 	cout<<fixed<<setprecision(3);
// 	cout<<speedmeterpersecond<<"m/s"<<endl;
// 	return 0;
// }
// output
// 12.9
// 3.583m/s

#include<iostream>
using namespace std;
class Speed{
	public:
	Speed(){}
	operator double(){
		double kmperhour;
		cin>>kmperhour;
		return kmperhour*1000/3600;
		
	}

};
int main(){
	Speed speed;
	double speedmeterpersecond=speed;
	cout<<fixed<<setprecision(3);
	cout<<speedmeterpersecond<<"m/s"<<endl;
	return 0;

}


