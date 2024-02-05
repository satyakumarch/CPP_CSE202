//Wap to count number of spaces and number of line in a file;
//Wap to count number of vowels in a file;
//Wap to copy content of 1 file to another.



#include <iostream>
#include <fstream>
using namespace std;

int main() {
     ifstream sourceFile("test.txt"); 
     ofstream destFile("country.txt"); 

    if (!sourceFile) {
        cout << "Error: Cannot open source file." <<endl;
        return 1;
    }

    if (!destFile) {
        cout<< "Error: Cannot open destination file." <<endl;
        return 1;
    }

    char ch;

    
    while (sourceFile.get(ch)) {
        destFile.put(ch);
    }

    sourceFile.close();
    destFile.close();

    cout << "File copied successfully." <<endl;

    return 0;
}














