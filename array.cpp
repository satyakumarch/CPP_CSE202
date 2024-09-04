//multidimensional array

#include<bits/stdc++.h>
//#include<iostream>
//using namespace std;
//
//int main(){
//	//array with 5  rows and 2 column
//	int a[5][2]={{0,0},{1,2},{3,4},{4,5},{6,5}};
//	//output each array element value
//	for(int i=0;i<5;i++)
//	for(int j=0;j<2;j++){
//		cout<<"a["<<i<<"]["<<j<<"]:";
//		cout<<a[i][j]<<endl;
//	}
//}
//output
//a[0][0]:0
//a[0][1]:0
//a[1][0]:1
//a[1][1]:2
//a[2][0]:3
//a[2][1]:4
//a[3][0]:4
//a[3][1]:5
//a[4][0]:6
//a[4][1]:5



//passing array to function size
#include<iostream>
using namespace std;
//function declaration
double getaverage(int arr[],int size);
int main(){
	// an int array with 5 element
	int balance[5]={1000,2,3,17,50};
	double avg;
	
	//pass pointer to the array as an  argument
	avg =getaverage(balance, 5);
	//output the returned value
	cout<<"Average vaue is:"<<avg<<endl;
	return 0;
}
