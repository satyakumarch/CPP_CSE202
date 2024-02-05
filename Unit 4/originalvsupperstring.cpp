#include <iostream>
#include <string>
using namespace std;

class CustomString {
public:
    CustomString(const string& inputString) {
        originalString = inputString;
    }

    string modifyString() {
        if (!originalString.empty()) {
            originalString[0] = toupper(originalString[0]);
        }
        return originalString;
    }

    string getOriginalString() const {
        return originalString;
    }

private:
    string originalString;
};

int main() {
    string inputString;
    getline(cin, inputString);

    CustomString customString(inputString);

    cout << "Original string: " << customString.getOriginalString() << endl;
    cout << "Modified string: " << customString.modifyString() << endl;

    return 0;
}
//satya
//Original string: satya
//Modified string: Satya
