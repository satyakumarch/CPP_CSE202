#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main() {
    int age;
    double height;
    std::string name;

    // Input: Ask the user for age, height, and name
    //std::cout << "Enter age: ";
    std::cin >> age;

   // std::cout << "Enter height (in cm): ";
    std::cin >> height;

    std::cin.ignore(); // Ignore the newline character
    //std::cout << "Enter name: ";
    std::getline(std::cin, name);

    // Write data to "data.txt"
    std::ofstream outFile("data.txt");
    if (!outFile.is_open()) {
        std::cerr << "Error: Unable to open data.txt for writing." << std::endl;
        return 1;
    }

    outFile << age << std::endl;
    outFile << std::fixed << std::setprecision(1) << height / 1.0 << std::endl; // Convert height to meters and round to one decimal place
    outFile << name << std::endl;

    outFile.close();

    // Read and display data from "data.txt"
    std::ifstream inFile("data.txt");
    if (!inFile.is_open()) {
        std::cerr << "Error: Unable to open data.txt for reading." << std::endl;
        return 1;
    }

    inFile >> age;
    inFile >> height;
    inFile.ignore(); // Ignore the newline character
    std::getline(inFile, name);

    inFile.close();

    // Output: Display the user's age, height, and name
    std::cout << age << std::endl;
    std::cout << std::fixed << std::setprecision(1) << height << std::endl; // Display height in meters
    std::cout << name << std::endl;

    return 0;
}
//output
//Enter age: 3
//Enter height (in cm): 60.22
//Enter name: Emma G Copper
//3
//0.6
//Emma G Copper
