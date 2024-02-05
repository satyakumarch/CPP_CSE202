#include<iostream>
#include<string>
using namespace std;
int main(){
	string s="Austrilia";
	  s.insert(3,"nzl");
	  	cout<<s<<endl;
	  
	  s.erase(3,3);
	  cout<<s<<endl;
	  
	  s.replace(3,2,"india");
	  cout<<s<<endl;
	  
	  s.replace(4,4,"England");
	  cout<<s<<endl; 
	  
	  s.append("west indies");
	  cout<<s<<endl;
	  
	  s.append("west indies",6);
	  cout<<s<<endl;
	  
	  cout<<s.size()<<endl;
	  cout<<s.length()<<endl;
	  cout<<s.max_size()<<endl;
	  
	  string a="austrilia";
	  string b="india";
	  
	  int x=a.compare(b);
	  cout<<x<<endl;
	  int y=a.compare(3,2,b,2,2);
	  cout<<
	  
	  


	//cout<<s1;//1234
}


