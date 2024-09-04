#include <iostream>
#include <string>
#include <cctype>

enum PasswordStrength { WEAK, MEDIUM, STRONG };

PasswordStrength checkPasswordStrength(const std::string& password) {
    int length = password.length();
    bool hasUpperCase = false;
    bool hasLowerCase = false;
    bool hasDigit = false;
    bool hasSpecialChar = false;

    for (char c  password) {
        if (std::isupper(c)) {
            hasUpperCase = true;
        } else if (std::islower(c)) {
            hasLowerCase = true;
        } else if (std::isdigit(c)) {
            hasDigit = true;
        } else {
            hasSpecialChar = true;
        }
    }

    if (length < 6) {
        return WEAK;
    } else if (length >= 6 && length <= 25 && (hasUpperCase || hasLowerCase) && hasDigit) {
        return MEDIUM;
    } else if (length >= 8 && length <= 25 && hasUpperCase && hasLowerCase && hasDigit && hasSpecialChar) {
        return STRONG;
    } else {
        return WEAK;
    }
}

int main() {
    std::string password;
    std::cin >> password;

    PasswordStrength strength = checkPasswordStrength(password);

    switch (strength) {
        case WEAK:
            std::cout << "Weak" << std::endl;
            break;
        case MEDIUM:
            std::cout << "Medium" << std::endl;
            break;
        case STRONG:
            std::cout << "Strong" << std::endl;
            break;
    }

    return 0;
}

