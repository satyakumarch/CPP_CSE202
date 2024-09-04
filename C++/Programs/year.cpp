#include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// class Person{
// 	public:
// 		Person(string& name,int birthyear,int currentyear):name(name),birthyear(birthyear),currentyear(currentyear){}
		
// 		int calculateage(){
// return currentyear-birthyear;		
// }
// void displayage() {
// cout<<"Age:"<<calculateage()<<"years:"<<endl;
// }
// private:
// 	string name;
// 	int birthyear;
// 	int currentyear;
		
// };
// int main(){
// 	string name;
// 	int birthyear,currentyear;
// 	cout<<"Enter the name: ";
// 	cin>>name;
// 	cout<<"Enter the birthyear : ";
// 	cin>>birthyear;
// 	cout<<"Enter the currentyear : ";
// 	cin>>currentyear;
// 	Person person(name,birthyear,currentyear);
// 	person.displayage();
// 	return 0;
// }
// output
// satya
// 2000
// 2024
// Age:24years:

#include<iostream>
using namespace std;
 class Person{
	public:
	Person(string& name,int birthyear,int currentyear):name(name),currentyear(currentyear),birthyear(birthyear){}
	int calculateage(){
		return currentyear-birthyear;
	}
	void displayage(){
cout<<"age"<<calculateage()<<"year";

	}
	private:
string name;
int birthyear,currentyear;
	
	
 };
int main(){
	string name;
	int currentyear,birthyear;
	cout<<"Enter your name:";
	cin>>name;
	cout<<"Enter your current age";
	cin>>currentyear;
	cout<<"Enter your birthyear";
	cin>>birthyear;

	Person person(name,currentyear,birthyear);
	person.display();
	return 0;


}