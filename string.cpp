#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main(){
	char str1[10]="hello";
	char str2[20]="world";
	char str3[10];
	int len;
	//copy str1 into str3
	strcpy(str3,str1);
	cout<<"strcpy(str3,str1):"<<str3<<endl;
	
	//concatenate str1 and str2
	strcat(str1,str2);
	cout<<"strcat(str1,str2):"<<str1<<endl;
	
	//total lenght ofstr1 after concatenate
	len=strlen(str1);
	cout<<"strlen(str1):"<<len<<endl;
	return 0;
}
//output
//strcpy(str3,str1):hello
//strcat(str1,str2):helloworld
//strlen(str1):10


