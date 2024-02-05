#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string filename;
    std::cin >> filename;

    std::fstream file(filename, std::ios::out | std::ios::app);

    if (file.is_open()) {
        std::cout << "File '" << filename << "' opened successfully." << std::endl;
    } else {
        std::cerr << "Failed to open file '" << filename << "'." << std::endl;
        return 1; // Return non-zero to indicate failure
    }

    // Close the file
    file.close();
    std::cout << "File '" << filename << "' closed successfully." << std::endl;

    return 0;
}

