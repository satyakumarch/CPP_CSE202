#include <iostream>
#include <fstream>

// Define a struct to store the integer value
struct Student {
    int value;
};

// Function to open the file for writing
std::ofstream getFileHandleForWriting() {
    std::ofstream file("student.dat", std::ios::out | std::ios::binary);
    return file;
}

// Function to open the file for reading
std::ifstream getFileHandleForReading() {
    std::ifstream file("student.dat", std::ios::in | std::ios::binary);
    return file;
}

// Function to close the file
void closeFile(std::ifstream& input) {
    input.close();
}

// Function to close the file
void closeFile(std::ofstream& output) {
    output.close();
}

int main() {
    int value;
    std::cin >> value;

    // Create a struct instance with the entered value
    Student student;
    student.value = value;

    // Open the file for writing
    std::ofstream outputFile = getFileHandleForWriting();

    // Check if the file is open
    if (!outputFile.is_open()) {
        std::cerr << "Cannot open file!" << std::endl;
        return 1; // Return non-zero to indicate failure
    }

    // Write the student struct to the file
    outputFile.write(reinterpret_cast<char*>(&student), sizeof(student));

    // Close the file
    closeFile(outputFile);

    // Open the file for reading
    std::ifstream inputFile = getFileHandleForReading();

    // Check if the file is open
    if (!inputFile.is_open()) {
        std::cerr << "Cannot open file!" << std::endl;
        return 1; // Return non-zero to indicate failure
    }

    // Read the stored value from the file
    Student readStudent;
    inputFile.read(reinterpret_cast<char*>(&readStudent), sizeof(readStudent));

    // Close the file
    closeFile(inputFile);

    // Print the stored value
    std::cout << "Stored Value: " << readStudent.value << std::endl;
    std::cout << "Success" << std::endl;

    return 0;
}

