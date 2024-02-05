//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
////	string s="austrilia";
////	  s.insert(4,"welcome to ");//austwelcome to rilia
////	  //s.erase(2"au");
//string s1("12345");
//string s2("abcde");
//s1.erase(4,5);
//	cout<<s1;//1234
//}
//


#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputString1;
    string inputString2;

    cout << "Enter a string1 ";
    getline(std::cin, inputString1);
    
     cout << "Enter a string2 ";
    getline(std::cin, inputString2);

    int count1= inputString1.length();
    
   

    int count2= inputString2.length();


    cout << "The number of characters in the input string is: " << count1<< std::endl;
       cout << "The number of characters in the input string is: " << count2<< std::endl;

    return 0;
}

Enter a string1 lovely professiona 123345
Enter a string2 jai sree ram radhe radhe 12345
The number of characters in the input string is: 25
The number of characters in the input string is: 30
