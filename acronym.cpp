#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;
 string generateAcronym(const string& phrase) {
    string acronym = "";
    istringstream iss(phrase);
    string word;

    while (iss >> word) {
        acronym += toupper(word[0]);
    }

    return acronym;
}

int main() {
    string phrase;
    cout<<"Enter your string:";
    getline(cin, phrase);

    string acronym = generateAcronym(phrase);

    cout << acronym << std::endl;

    return 0;
}
//output
//Enter your string:Satya kumar chaudhary
//SKC
