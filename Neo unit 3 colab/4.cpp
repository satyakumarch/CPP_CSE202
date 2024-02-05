#include <iostream>

class Distance {
public:
    Distance() : feet_(0), inches_(0) {}
    Distance(double feet, double inches) : feet_(feet), inches_(inches) {}

    // Copy constructor
    Distance(const Distance& other) : feet_(other.feet_), inches_(other.inches_) {}

    void setDistance(double feet, double inches) {
        feet_ = feet;
        inches_ = inches;
    }

    void addDistance(const Distance& other) {
        feet_ += other.feet_;
        inches_ += other.inches_;
        if (inches_ >= 12.0) {
            feet_ += static_cast<int>(inches_ / 12);
            inches_ = inches_ - 12.0 * static_cast<int>(inches_ / 12);
        }
    }

    void displayDistance() const {
        std::cout << "distance = " << feet_ << "'" << inches_ << "\"" << std::endl;
    }

private:
    double feet_;
    double inches_;
};

int main() {
    double feet1, inches1, feet2, inches2;
    std::cin >> feet1 >> inches1;
    //std::cin >> feet2 >> inches2;

    Distance d1(feet1, inches1);
    Distance d2 = d1; // Create d2 as a copy of d1 using the copy constructor

    d1.addDistance(d2); // Calculate the sum of d1 and d2

    d1.displayDistance(); // Display the result

    return 0;
}
//output
//10.0 1.0
//distance = 20'2"
