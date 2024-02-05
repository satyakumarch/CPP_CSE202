#include <iostream>
#include <cstring>

class CustomString {
public:
    CustomString(const char* inputString) {
        strcpy(originalString, inputString);
    }

    CustomString operator!() {
        CustomString invertedString(originalString);
        for (int i = 0; originalString[i] != '\0'; i++) {
            if (std::islower(originalString[i])) {
                invertedString.originalString[i] = std::toupper(originalString[i]);
            } else if (std::isupper(originalString[i])) {
                invertedString.originalString[i] = std::tolower(originalString[i]);
            }
        }
        return invertedString;
    }

    const char* getOriginalString() const {
        return originalString;
    }

private:
    char originalString[101]; // Assuming a maximum of 100 characters
};

int main() {
    char inputString[101]; // Assuming a maximum of 100 characters
    std::cin.getline(inputString, sizeof(inputString));

    CustomString customString(inputString);
    CustomString invertedString = !customString;

    std::cout << "Original String: " << customString.getOriginalString() << std::endl;
    std::cout << "Inverted String: " << invertedString.getOriginalString() << std::endl;

    return 0;
}
sATya
Original String: sATya
Inverted String: SatYA
