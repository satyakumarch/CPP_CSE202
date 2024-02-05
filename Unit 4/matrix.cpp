#include <iostream>
#include <vector>
using namespace std;

class Matrix {
public:
    Matrix(int rows, int cols) : rows(rows), cols(cols), data(rows * cols) {}

    void input() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> data[i * cols + j];
            }
        }
    }

    void display() {
        cout << "Matrix:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << data[i * cols + j] << " ";
            }
            cout << endl;
        }
    }

    operator vector<int>() {
        vector<int> columnMajorArray(data.begin(), data.end());
        return columnMajorArray;
    }

private:
    int rows;
    int cols;
    vector<int> data;
};

int main() {
	cout<<"Enter row and column:"<<endl;
    int rows, cols;
    cin >> rows >> cols;

    Matrix matrix(rows, cols);
    cout<<"Enter matrix elements:"<<endl;;
    matrix.input();

    matrix.display();

    vector<int> columnMajorArray = matrix;

    cout << "\nColumn-Major Array:" << endl;
    for (int i = 0; i < columnMajorArray.size(); i++) {
        cout << columnMajorArray[i] << " ";
    }
    cout << endl;

    return 0;
}
//output
//Enter row and column:
//2 3
//Enter matrix elements:
//1 2 3 4 5 6
//Matrix:
//1 2 3
//4 5 6
//
//Column-Major Array:
//1 2 3 4 5 6


