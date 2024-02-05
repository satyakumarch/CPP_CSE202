//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string s1="arlcome";
//	string s2="wearomea";
//	cout<<s1.find("lc")<<endl;
//	cout<<s2.rfind("ea");
//	cout<<s2.find_last_of('e');
//	return 0;
//}
//output
//2
//66


#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1="welcome";
	string s2;
	s2=s1.substr(0,2);
	cout<<s2;
	return 0;
}
