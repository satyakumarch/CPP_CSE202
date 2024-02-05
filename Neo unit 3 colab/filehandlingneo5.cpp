#include <iostream>
#include <fstream>

int main() {
    int N;
    std::cin >> N;

    // Open the file for writing
    std::ofstream outputFile("numbers.txt");

    // Check if the file is open
    if (!outputFile.is_open()) {
        std::cerr << "Unable to open file!" << std::endl;
        return 1; // Return non-zero to indicate failure
    }

    // Write numbers from 1 to N to the file
    for (int i = 1; i <= N; ++i) {
        outputFile << i << " ";
    }

    // Close the file
    outputFile.close();

    // Open the file for reading
    std::ifstream inputFile("numbers.txt");

    // Check if the file is open
    if (!inputFile.is_open()) {
        std::cerr << "Unable to open file!" << std::endl;
        return 1; // Return non-zero to indicate failure
    }

    // Read and display numbers from the file
    int number;
    while (inputFile >> number) {
        std::cout << number << " ";
    }

    // Close the file
    inputFile.close();

    return 0;
}
//output
//10
//1 2 3 4 5 6 7 8 9 10
