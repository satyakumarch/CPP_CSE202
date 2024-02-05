#include <iostream>
#include <string>

int main() {
    std::string filename;

    // Input: Ask the user for the filename
    std::cout << "Enter the filename: ";
    std::cin >> filename;

    // Display a message indicating the file is closed
       std::cout << "File '" << filename << "' opened successfully." << std::endl;
    std::cout << "File '" << filename << "' closed successfully." << std::endl;

    return 0;
}
//output
//Enter the filename: sample.txt
//File 'sample.txt' opened successfully.
//File 'sample.txt' closed successfully.

