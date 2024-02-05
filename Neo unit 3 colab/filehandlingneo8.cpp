#include <iostream>
#include <iomanip>

int main() {
    int n;

    // Input: Ask the user for the number of ages (up to 20)
    //std::cout << "Enter the number of ages (up to 20): ";
    std::cin >> n;

    if (n > 20) {
        std::cout << "Exceeding limit!" << std::endl;
        return 0;
    }

    int age;
    int sum = 0;

    // Input: Ask the user for each age
    //std::cout << "Enter " << n << " ages separated by spaces:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> age;
        sum += age;
    }

    double average = static_cast<double>(sum) / n;

    // Output: Display the average age rounded to one decimal place
    std::cout << "Average age: " << std::fixed << std::setprecision(1) << average << std::endl;

    return 0;
}
//output
//3
//15 16 18
//Average age: 16.3


