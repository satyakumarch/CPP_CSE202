#include <iostream>
#include <fstream>

int setup() {
    // Open the file for writing (create or overwrite)
    std::ofstream outFile("sample.txt");
    if (!outFile.is_open()) {
        std::cerr << "Unable to open file." << std::endl;
        return 1;  // Return non-zero to indicate failure
    }

    std::string text;
    int count;
    std::getline(std::cin, text);  // Read the text
    std::cin >> count;            // Read the count

    for (int i = 0; i < count; ++i) {
        outFile << text << std::endl;  // Write text to the file
    }

    outFile.close();  // Close the file

    return 0;  // Return zero to indicate success
}

int main() {
    if (setup() == 0) {
        // File setup was successful, proceed to read the file
        std::ifstream inFile("sample.txt");
        if (!inFile.is_open()) {
            std::cerr << "Unable to open file." << std::endl;
            return 1;  // Return non-zero to indicate failure
        }

        std::string line;
        while (std::getline(inFile, line)) {
            std::cout << line << std::endl;
        }

        if (inFile.eof()) {
            std::cout << "End of file reached" << std::endl;
        } else {
            std::cerr << "Error reading file." << std::endl;
        }

        inFile.close();  // Close the file
    } else {
        std::cerr << "Unable to setup data." << std::endl;
    }

    return 0;
}
//output
//HelloWorld
//10
//HelloWorld
//HelloWorld
//HelloWorld
//HelloWorld
//HelloWorld
//HelloWorld
//HelloWorld
//HelloWorld
//HelloWorld
//HelloWorld
//End of file reached
