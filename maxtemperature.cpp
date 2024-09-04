//the program should prompt the user to enter the temperature data for each
//region and day afterward it should display the highest recorded temperature.

#include <iostream>
#include <vector>

int findMaxElement(const std::vector<std::vector<int>>& data) {
    int maxElement = data[0][0];
    for (const auto& row : data) {
        for (int element : row) {
            if (element > maxElement) {
                maxElement = element;
            }
        }
    }
    return maxElement;
}

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int>> temperatureData(n, std::vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> temperatureData[i][j];
        }
    }

    int maxTemperature = findMaxElement(temperatureData);

    std::cout << maxTemperature << std::endl;

    return 0;
}




