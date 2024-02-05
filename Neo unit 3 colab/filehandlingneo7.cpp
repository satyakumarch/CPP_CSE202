#include <iostream>
#include <fstream>

int main() {
    int n;
    std::ifstream inputFile("numbers.txt");

    if (!inputFile) {
        std::cerr << "Unable to open file!" << std::endl;
        return 1;
    }

    inputFile >> n;

    if (n > 100) {
        std::cout << "Exceeding limit!" << std::endl;
        inputFile.close();
        return 0;
    }

    int evenCount = 0;
    int oddCount = 0;
    int d;
    std::cin>>d;
    int num[n];

    for (int i = 0; i < n; ++i) {
        std::cin >>num[i];
        

        if (num[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    inputFile.close();

    std::cout << "Even: " << evenCount << std::endl;
    std::cout << "Odd: " << oddCount << std::endl;

    return 0;
}

