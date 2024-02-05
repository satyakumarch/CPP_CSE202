#include <iostream>
#include <algorithm>
using namespace std;

class Fraction {
public:
    Fraction(int numerator, int denominator) {
        int gcd = __gcd(numerator, denominator);
        this->numerator = numerator / gcd;
        this->denominator = denominator / gcd;
    }

    Fraction operator*(const Fraction& other) const {
        return Fraction(numerator * other.numerator, denominator * other.denominator);
    }

    void display() const {
        cout << numerator << "/" << denominator << endl;
    }

private:
    int numerator;
    int denominator;
};

int main() {
    int numerator1, denominator1, numerator2, denominator2;

    cin >> numerator1 >> denominator1;
    cin >> numerator2 >> denominator2;

    Fraction fraction1(numerator1, denominator1);
    Fraction fraction2(numerator2, denominator2);

    Fraction result = fraction1 * fraction2;

    cout << "The result of multiplication is: ";
    result.display();
  
    return 0;
}
//output
//44 88
//100 200
//The result of multiplication is: 1/4
