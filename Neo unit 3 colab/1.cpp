#include <iostream>
#include <cstring>
using namespace std;

class Student {
public:
    Student() {
        //name = new char[4];
        name = new char[4];
        strcpy(name, "XYZ");
        birthYear = 2023;
        cout << "Name: " << name << endl;
        cout << "Year born: " << birthYear << endl;
    }

    Student(const char* n, int y) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        birthYear = y;
        cout << "Name: " << name << endl;
        cout << "Year born: " << birthYear << endl;
    }

    ~Student() {
        cout << "Destroyed object: " << name << endl;
        delete[] name;
    }

private:
    char* name;
    int birthYear;
};

int main() {
    char studentName[21];
    int birthYear;

    cin.getline(studentName, 21);
    cin >> birthYear;

    Student defaultStudent; // Create the default student
    Student customStudent(studentName, birthYear); // Create a custom student

    return 0;
}
//output
//harry
//2009
//Name: XYZ
//Year born: 2023
//Name: harry
//Year born: 2009
//Destroyed object: harry
//Destroyed object: XYZ
