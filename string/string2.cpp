#include<iostream>
#include<string>
using namespace std;

class myclass{
	public:
		string data = "johny";
		void printdata(const string& str){
			string modifieddata=data+" "+str;
			cout<<modifieddata<<endl;
		}
};

//return 0;}

