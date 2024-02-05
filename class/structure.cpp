#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int age;
    string grade;
};

int main() {
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    Student students[numStudents];

    for (int i = 0; i < numStudents; i++) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin.ignore(); // Ignore the newline character left in the buffer
        getline(cin, students[i].name);

        cout << "Age: ";
        cin >> students[i].age;

        cout << "Grade: ";
        cin >> students[i].grade;
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << i + 1 << ":\n";
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Grade: " << students[i].grade << endl;
        cout << "---------------------------\n";
    }

    return 0;
}
//Enter the number of students: 2
//Enter details for student 1:
//Name: satya
//Age: 23
//Grade: 33
//Enter details for student 2:
//Name: ram
//Age: 24
//Grade: 232
//
//Student Details:
//Student 1:
//Name: satya
//Age: 23
//Grade: 33
//---------------------------
//Student 2:
//Name: ram
//Age: 24
//Grade: 232
//---------------------------
