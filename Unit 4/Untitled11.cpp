//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Furniture {
//protected:
//    double price;
//    string material;
//
//public:
//    Furniture(double p, const string& m) : price(p), material(m) {}
//
//    void displayInfo() {
//        cout << "Price: $" << fixed << setprecision(2) << price << endl;
//        cout << "Material: " << material << endl;
//    }
//};
//
//class RecliningChair {
//protected:
//    bool isElectric;
//
//public:
//    RecliningChair(bool electric) : isElectric(electric) {}
//
//    void displayInfo() {
//        cout << "Chair Type: " << (isElectric ? "Electric" : "Manual") << endl;
//    }
//};
//
//class LightedBookshelf {
//protected:
//    int numLights;
//
//public:
//    LightedBookshelf(int lights) : numLights(lights) {}
//
//    void displayInfo() {
//        cout << "Number of lights: " << numLights << endl;
//    }
//};
//
//int main() {
//    double price;
//    string material;
//    char type;
//
//    cin >> price >> material >> type;
//
//    Furniture furniture(price, material);
//
//    if (type == 'C') {
//        bool isElectric;
//        char electric;
//        cin >> electric;
//        isElectric = (electric == 'Y' || electric == 'y');
//        RecliningChair chair(isElectric);
//        furniture.displayInfo();
//        chair.displayInfo();
//    } else if (type == 'T') {
//        cout << "Price: $" << fixed << setprecision(2) << price << endl;
//        cout << "Material: " << material << endl;
//    } else if (type == 'B') {
//        int numShelves;
//        cin >> numShelves;
//        LightedBookshelf bookshelf(numShelves);
//        furniture.displayInfo();
//        bookshelf.displayInfo();
//    } else {
//        cout << "Invalid type!" << endl;
//    }
//
//    return 0;
//}
#include <iostream>
#include <iomanip>

using namespace std;

class Marks {
protected:
    double mark1;
    double mark2;

public:
    Marks(double m1, double m2) : mark1(m1), mark2(m2) {}

    virtual void displayMarks() {
        cout << "Mark 1: " << fixed << setprecision(1) << mark1 << endl;
        cout << "Mark 2: " << fixed << setprecision(1) << mark2 << endl;
    }
};

class SportsMarks {
protected:
    double score;

public:
    SportsMarks(double s) : score(s) {}

    virtual void displaySportsMarks() {
        cout << "Score: " << fixed << setprecision(1) << score << endl;
    }
};

class Student : public Marks, public SportsMarks {
protected:
    int studentID;

public:
    Student(int id, double m1, double m2, double s) : studentID(id), Marks(m1, m2), SportsMarks(s) {}

    void displayStudentInfo() {
        cout << "ID: " << studentID << endl;
        Marks::displayMarks();
        SportsMarks::displaySportsMarks();
        double totalScore = mark1 + mark2 + score;
        cout << "Total score: " << fixed << setprecision(1) << totalScore << endl;
    }
};

int main() {
    int studentID;
    double m1, m2, s;

    cin >> studentID >> m1 >> m2 >> s;

    if (m1 >= 0 && m1 <= 100 && m2 >= 0 && m2 <= 100 && s >= 0 && s <= 100) {
        Student student(studentID, m1, m2, s);
        student.displayStudentInfo();
    } else {
        cout << "Invalid mark 1. Only enter values between 0 and 100" << endl;
    }

    return 0;
}

