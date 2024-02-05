#include <iostream>
#include <iomanip> // For setw function

using namespace std;

int main() {
    int rows, cols;

    // Get the number of rows and columns from the user
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Check if the user inputs are valid
    if (rows <= 0 || cols <= 0) {
        cout << "Please enter positive values for rows and columns." << endl;
        return 1; // Exit with an error code
    }

    // Input data into a 2D array
    int** table = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        table[i] = new int[cols];
        for (int j = 0; j < cols; ++j) {
            cout << "Enter the value for row " << i + 1 << ", column " << j + 1 << ": ";
            cin >> table[i][j];
        }
    }

    // Print the table in tabular format
    cout << "Table:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << setw(5) << table[i][j];         }
        cout << endl;
    }

    
    for (int i = 0; i < rows; ++i) {
        delete[] table[i];
    }
    delete[] table;

    return 0;
}

