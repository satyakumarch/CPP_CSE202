//#include <iostream>
//#include <string>
//using namespace std;
//
//class Person {
//public:
//    Person(const string& name, int birthYear, int currentYear)
//        : name(name), birthYear(birthYear), currentYear(currentYear) {}
//
//    int calculateAge() const {
//        return currentYear - birthYear;
//    }
//
//    void displayAge() const {
//        cout << "Age: " << calculateAge() << " years" << endl;
//    }
//
//private:
//    string name;
//    int birthYear;
//    int currentYear;
//};
//
//int main() {
//    string name;
//    int birthYear, currentYear;
//
//    cin >> name >> birthYear >> currentYear;
// 
//    Person person(name, birthYear, currentYear);
//    person.displayAge();
//
//    return 0;
//}
//satya
//2002
//2019
//Age: 17 years


#include<iostream>
#include<string>
using namespace std;

class Person{
	public:
	Person(const string& name,int birthYear,int current Year)
	     :name(name),birthyear(birthyear),currentyear(currentyear) {}
	
	int calculateAge const(){
		return currentyear-birthyear;
			}
	
		void displayAge const(){
		cout<<"Age"<< calculateAge()<<"year";
	}
	private:
		string name;
		int currentYear;
		int birthYear;
};
int main(){
	string name;
	int currentyear,birthyear;
	
	cin>>name>>currentyear>>birthyear;
	
	Person person(name,currentyear,birthyear);
	person.displayage();
	return 0;
}

