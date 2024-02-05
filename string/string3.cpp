#include<iostream>
using namespace std;
int main(){
string s1("12345");
string s2("abcde");
//s1.insert(4, s2);
//cout<<s1<<endl;
//s1.erase(2,5);	// s1 = 12345
//cout<<s1<<endl;

//s2.replace(1, 3, s1); // s2 = a12345e
//cout<<s2<<endl;
s2.append(s1,1,5);
cout<<s2<<endl;	

return 0;
}

