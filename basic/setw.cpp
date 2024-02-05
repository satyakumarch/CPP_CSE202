//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main(){
//	int a=3,b=78, c=1233;
//	cout<<"manuplator in c++"<<endl;
//	cout<<endl;
//	cout<<"The value of a without setw is:"<<a<<endl;
//	cout<<"The value of b without setw is:"<<b<<endl;
//	cout<<"The value of c without setw is:"<<c<<endl;
//	cout<<endl;
//	
//	cout<<"The value of a is:"<<setw(4)<<a<<endl;
//	cout<<"The value of b is:"<<setw(4)<<b<<endl;
//	cout<<"The value of c is:"<<setw(4)<<c<<endl;
//}
//output
//The value of a without setw is:3
//The value of b without setw is:78
//The value of c without setw is:1233
//
//The value of a is:   3
//The value of b is:  78
//The value of c is:1233


#include <iostream>

int* performArithmetic(int num1, int num2) {
    int* result = new int(num1 + num2);
    return result;
}

int main() {
    int num1, num2;
    std::cin >> num1 >> num2;

    int* arithmeticResult = performArithmetic(num1, num2);

    // Print the result
    std::cout << "Result: " << *arithmeticResult << std::endl;

    // Delete the memory allocated for the result
    delete arithmeticResult;

    // Attempt to access the dangling pointer
    std::cout << "Error: Dangling pointer detected!" << std::endl;

    return 0;
}

