#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class customstring{
	private:
		string str;
		public:
			customstring(string& s){
				str=s;
			}
			void operator++(){
				if(!str.empty()){
					if(str[0]>='a'&& str[0]<='z'){
						str[0]=str[0]-'a'+'A';
					}
				}
			}
			void display(){
				cout<<str<<endl;    
			}
};


