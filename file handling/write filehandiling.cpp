//write a file
#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ofstream of("result.txt");
	of<<"helloworld"<<endl;
     of<<"world"<<endl;
     of<<100;
	of.close();
	cout<<"data saved"<<endl;

   return 0;
}

