#include <iostream>
#include <fstream>

class Employee {
public:
    int eid;

    Employee(int id) : eid(id) {}
};

int main() {
    int eid;
    std::cin >> eid;

    // Create an Employee object
    Employee employee(eid);

    // Open a binary file for writing
    std::ofstream outputFile("employee.dat", std::ios::binary);

    // Check if the file is open
    if (!outputFile.is_open()) {
        std::cerr << "Unable to setup." << std::endl;
        return 1; // Return non-zero to indicate failure
    }

    // Write the Employee object to the file
    outputFile.write(reinterpret_cast<char*>(&employee), sizeof(Employee));

    // Close the file
    outputFile.close();

    // Calculate the size of the file
    std::ifstream inputFile("employee.dat", std::ios::binary | std::ios::ate);
    if (!inputFile.is_open()) {
        std::cerr << "Unable to setup." << std::endl;
        return 1; // Return non-zero to indicate failure
    }
    
    std::streampos fileSize = inputFile.tellg();
    inputFile.close();

    // Print the size of the file in bytes
    std::cout << "size is: " << fileSize << " bytes." << std::endl;

    return 0;
}

//output
//10
//size is: 4 bytes.
