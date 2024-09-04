// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// //function declaration
// int max(int num1,int num2);

// int main(){
// 	//local variable declaration
// //	int a=100;
// //	int b=200;
//     int a,b,ret;
// 	cout<<"Enter num1:";
// 	cin>>a;
// 	cout<<"Enter num2:";
// 	cin>>b;
	
// 	//calling a function to get max value
// 	ret = max(a,b);
// 	cout<<"max value is:"<<ret <<endl;
// 	return 0;
	
// }
////function returing the max  between two number
//int max(int num1,int num2){
//	//local variable declaration
//	int result;
//	if(num1>num2)
//	result=num1;
//	else
//	result=num2;
//	return result;
//}
//

//Default value for parameter
#include<iostream>
using namespace std;

int sum(int a,int b){
	int result=a+b;
	return (result);
}
int main(){
	//local variable declaration
	int a=100,b=200,result;
	
	//calling a function to add the value
	result =sum(a,b);
	cout<<"total result:"<<result<<endl;
	
}


//call by a value
//#include<iostream>
//using namespace std;
//
//// function declaration with reference parameters
//void swap(int &x, int &y);
//
//int main() {
//    // local variable
//    int a = 100;
//    int b = 200;
//
//    cout << "Before swap, value of a: " << a << endl;
//    cout << "Before swap, value of b: " << b << endl;
//
//    // calling a function to swap the value
//    swap(a, b);
//
//    cout << "After swap, value of a: " << a << endl;
//    cout << "After swap, value of b: " << b << endl;
//
//    return 0;
//}
//
//// function implementation with reference parameters
//void swap(int &x, int &y) {
//    int temp = x;
//    x = y;
//    y = temp;
//}


// #include<iostream>
// using namespace std;

// //function declaration
// void swap(int *x, int *y);

// int main() {
//     //local variable declaration
//     int a = 100;
//     int b = 200;
    
//     cout << "Before swap, value of a: " << a << endl;
//     cout << "Before swap, value of b: " << b << endl;
    
//     //calling the swap function by passing the addresses of variables a and b
//     swap(&a, &b);
    
//     cout << "After swap, value of a: " << a << endl;
//     cout << "After swap, value of b: " << b << endl;
    
//     return 0;
// }

// //function definition to swap two integers using pointers
// void swap(int *x, int *y) {
//     int temp = *x; // store the value at the address pointed by x in a temporary variable
//     *x = *y;       // assign the value at the address pointed by y to the address pointed by x
//     *y = temp;     // assign the value stored in the temporary variable to the address pointed by y
// }

