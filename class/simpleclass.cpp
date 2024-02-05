#include<iostream>
using namespace std;

class Room{
	
	public:
	int length;
	int breadth;
	int height;
	
	int CalculateArea(){
		return length*breadth;
	}
	int CalculateVolume(){
		return length*breadth*height;
	}
};

int main(){
	Room room1;
	cout<<"Enter the length:";
	cin>>room1.length;
	
	cout<<"Enter the breadth:";
	cin>>room1.breadth;
	
	cout<<"Enter the height:";
	cin>>room1.height;
	
	cout<<"Area of room:"<<room1.CalculateArea()<<endl;
	cout<<"volume of room:"<<room1.CalculateVolume()<<endl;
	
	return 0;
	
}




//#include <iostream>
//#include <string>
//using namespace std;
//
//class student {
//public:
//int roll;
//string name;
//string address;
//int phone;
//
//void studentInformation() {
//    cout << "Roll No: " << roll << endl;
//    cout << "Name: " << name << endl;
//    cout << "Address: " << address << endl;
//    cout << "Phone: " << phone << endl;
//}
//};
//
//
//int main(){
//	
//student std;
//
//cout << "Enter roll number: ";
//cin >> std.roll;
//
//cout << "Enter name: ";
//cin.ignore(); // Clear the newline character from the previous input
//getline(cin, std.name);
//
//cout << "Enter address: ";
//getline(cin, std.address);
//
//cout << "Enter phone number: ";
//cin >> std.phone;
//
//cout << "Student Information:" << endl;
//std.studentInformation();
//
//return 0;
//}

//Enter roll number: 12
//Enter name: satya kumar chaudahry
//Enter address: nepal
//Enter phone number: 23132341
//Student Information:
//Roll No: 12
//Name: satya kumar chaudahry
//Address: nepal
//Phone: 23132341

//
//
//#include<iostream>
//#include<string>
//using namespace std;
//
//class student{
//	public:
//	int roll;
//	string name;
//	string address;
//	int phone;
//	
//	void studentinformation(){
//		cout<<"Rollno:"<<roll<<endl;
//		cout<<"Name:"<<name<<endl;
//		cout<<"Address:"<<address<<endl;
//		cout<<"Phone number:"<<phone<<endl;
//	}	
//};
//int main(){
//	
//	student std;
//	cout<<"Enter the roll:";
//	cin>>std.roll;
//	
//	cout<<"Enter the name:";
//	cin.ignore();
//	getline(cin,std.name);
//	
//	cout<<"Enter address:";
//	getline(cin,std.address);
//	
//	cout<<"Enter phone number:";
//	cin>>std.phone;
//	
//	cout<<"Student information:"<<endl;
//	std.studentinformation();	
//	
//}
//Enter the roll:23
//Enter the name:satya kumar cahudhary
//Enter address:Nepal
//Enter phone number:33243423
//Student information:
//Rollno:23
//Name:satya kumar cahudhary
//Address:Nepal
//Phone number:33243423

















