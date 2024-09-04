#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//function to check if a string is a valid phone number

bool isvalidphonenumber(const string& phonenumber){
	//check if the length of the string is exactly 12 character
	if(phonenumber.length()!=12){
		return false;
	}
	//check if hyphen are in the correct position
	if(phonenumber[3]!="-"|| phonenumber[7]!="-"){
		return false;
		
	}
	//check if all character in position 0-2 and 4-6 are digit
	for(int i=0;i<12;i++){
		if(i==3||i==7){
			continue;
		}
		if(!isdigit(phonenumber[i])){
			return false;
		}
	}
return true;
};
int main() {
    string phoneNumber;

    // Input phone number
    cin >> phoneNumber;

    if (isValidPhoneNumber(phoneNumber)) {
        cout << "Yes, the phone number is valid." << endl;

        // Remove hyphens and display the number without hyphens
        string numberWithoutHyphens = phoneNumber.substr(0, 3) + phoneNumber.substr(4, 3) + phoneNumber.substr(8);
        cout << numberWithoutHyphens << endl;
    } else {
        cout << "No, the phone number is not valid." << endl;
    }

    return 0;
}


