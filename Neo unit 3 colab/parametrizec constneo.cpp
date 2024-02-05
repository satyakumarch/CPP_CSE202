#include <iostream>
#include <string>

class Test {
public:
    Test(const std::string& subject = "None", int marks = 0) : subject_(subject), marks_(marks) {}

    const std::string& getSubject() const {
        return subject_;
    }

    int getMarks() const {
        return marks_;
    }

private:
    std::string subject_;
    int marks_;
};

class Course {
public:
    Course(const Test tests[6]) {
        for (int i = 0; i < 6; ++i) {
            assessments_[i] = tests[i];
        }
    }

    int calculateTotalMarks(const std::string& subject) const {
        int totalMarks = 0;
        int count = 0;
        for (int i = 0; i < 6; ++i) {
            if (assessments_[i].getSubject() == subject) {
                totalMarks += assessments_[i].getMarks();
                count++;
            }
        }
        return totalMarks;
    }


private:
    Test assessments_[6];
};

int main() {
    Test tests[6];
    
    for (int i = 0; i < 6; ++i) {
        std::string subject;
        int marks;
        std::cin >> subject >> marks;
        tests[i] = Test(subject, marks);
    }

    Course course(tests);

    std::cout << "Maths Total Marks: " << course.calculateTotalMarks("Maths") << std::endl;
    std::cout << "Science Total Marks: " << course.calculateTotalMarks("Science") << std::endl;
    std::cout << "Computer Total Marks: " << course.calculateTotalMarks("Computer") << std::endl;


    return 0;
}
//output
//Maths
//50
//Science
//50
//None
//50
//Maths
//0
//Science
//0
//None
//0
//Maths Total Marks: 50
//Science Total Marks: 50
//Computer Total Marks: 0
//Maths Average Marks: 25
//Science Average Marks: 25
//Computer Average Marks: 0
