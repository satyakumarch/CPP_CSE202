#include <iostream>
#include <string>
using namespace std;

class MyString {
public:
    MyString(const string& str) : value(str) {}

    MyString operator+(const MyString& other) const {
        return MyString(value + other.value);
    }

    MyString operator*(int n) const {
        string result;
        for (int i = 0; i < n; i++) {
            result += value;
        }
        return MyString(result);
    }

    string getValue() const {
        return value;
    }

private:
    string value;
};

int main() {
    string str1, str2;
    int n;

    getline(cin, str1);
    getline(cin, str2);
    cin >> n;

    MyString myStr1(str1);
    MyString myStr2(str2);

    MyString concatenatedStr = myStr1 + myStr2;
    MyString repeatedStr1 = myStr1 * n;
    MyString repeatedStr2 = myStr2 * n;

    cout << concatenatedStr.getValue() << std::endl;
    cout << repeatedStr1.getValue() << endl;
    cout << repeatedStr2.getValue() << endl;

    return 0;
}
//output
//satya
//kumar
//4
//satya kumar
//satya satya satya satya
//kumarkumarkumarkumar


