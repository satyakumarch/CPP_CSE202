//#include <iostream>
//#include <string>
//using namespace std;
//
//
//class Student {
//public:
//    string name;
//    int rollNumber;
//    int marks[5];
//    int totalMarks;
//
//    Student() {
//        totalMarks = 0;
//    }
//
//    void calculateTotalMarks() {
//        for (int i = 0; i < 5; i++) {
//            totalMarks += marks[i];
//        }
//    }
//
//    void displayReportCard() {
//        cout << "Name: " << name << endl;
//        cout << "Roll Number: " << rollNumber << endl;
//        cout << "Total Marks: " << totalMarks << endl;
//    }
//};
//
//int main() {
//    int n;
//    cin >> n;
//
//    Student students[n];
//
//    for (int i = 0; i < n; i++) {
//        cin >> students[i].name;
//        cin >> students[i].rollNumber;
//
//        for (int j = 0; j < 5; j++) {
//            cin >> students[i].marks[j];
//        }
//
//        students[i].calculateTotalMarks();
//    }
//
//    cout << "Student Report Cards:" <<endl;
//    for (int i = 0; i < n; i++) {
//        students[i].displayReportCard();
//    }
//
//    return 0;
//}

#include<iostream>
#include<string>
using namespace std;
class student{
	public:
		string name;
		int rollno;
		int mark[5];
		int totalmark;
		
		student(){
			totalmarl=0;
		}
	void calculatetotalmark(){
		for(int i=0;i<5;i++){
			totalmark+=mark[i];
		}
	}
		void dispalytotalmark(){
			cout<<"name:"<<name<<endl;
			cout<<"rollno:"<<rollno<<endl;
			cout<<"totalmark:"<<totalmark<<endl;
	}
};
int main()
{
	int n;
	cin>>n;
	
	Student student[n];
}
