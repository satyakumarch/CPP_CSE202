#include <iostream>
#include <fstream>

int main() {
    int numberCount;
    std::cin >> numberCount;

    std::fstream file("numbers.txt", std::ios::in | std::ios::out | std::ios::app);

    if (!file.is_open()) {
        std::cerr << "Failed to open the file." << std::endl;
        return 1;  // Return non-zero to indicate failure
    }

    // Check if the file is empty
    file.seekg(0, std::ios::end);
    if (file.tellg() == 0) {
        std::cout << "File is empty" << std::endl;

        // Add numbers starting from 100
        for (int i = 0; i < numberCount; ++i) {
            file << i + 100 << std::endl;
        }

        std::cout << "Adding " << numberCount << " numbers starting from 100" << std::endl;
        std::cout << "Success" << std::endl;
    } else {
        std::cerr << "Failed" << std::endl;
    }

    file.close();
    return 0;
}
//output
//10
//File is empty
//Adding 10 numbers starting from 100
//Success
