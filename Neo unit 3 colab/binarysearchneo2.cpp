#include <iostream>
#include <fstream>
#include <iomanip>

int main() {
    double a, b, c;

    // Input: Ask the user for three double-point values
    std::cout << "Enter three double-point values (a, b, and c): ";
    std::cin >> a >> b >> c;

    // Calculate sum of a and b, and product of b and c
    double sum = a + b;
    double product = b * c;

    // Round sum to two decimal places
    sum = std::round(sum * 100) / 100;

    // Write results to "operations.txt"
    std::ofstream outFile("operations.txt");
    if (!outFile.is_open()) {
        std::cerr << "Error: Unable to open operations.txt for writing." << std::endl;
        return 1;
    }

    outFile << std::fixed << std::setprecision(2) << sum << std::endl;
    outFile << std::fixed << std::setprecision(2) << product << std::endl;

    outFile.close();

    // Display contents of "operations.txt" to confirm calculations
    std::ifstream inFile("operations.txt");
    if (!inFile.is_open()) {
        std::cerr << "Error: Unable to open operations.txt for reading." << std::endl;
        return 1;
    }

    double result1, result2;
    inFile >> result1 >> result2;

    inFile.close();

    std::cout << result1 << std::endl;
    std::cout << result2 << std::endl;

    return 0;
}

