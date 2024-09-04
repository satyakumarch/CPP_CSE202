//#include<bits/stdc++.h>
//#include<iostream>
//using namespace std;
//int main(){
//	int var=20;
//	int *ip;
//	
//	ip=&var;
//	cout<<"value of var variable:";
//	cout<<var<<endl;
//	
//	//print the address stored inip pointer variable
//	cout<<"address stored in ip variable:";
//	cout<<ip<<endl;
//	
//	//access the value at the address available in pointer
//	cout<<"value of *ip variable:";
//	cout<<*ip<<endl;
//	return 0;
//}
//
//output
//value of var variable:20
//address stored in ip variable:0x6ffe14
//value of *ip variable:20
//

//null pointer
//#include<iostream>
//using namespace std;
//int main(){
//
//		int *ptr=NULL;
//		cout<<"The value of ptr is:"<<ptr;
//		return 0;
//	}
//output
//The value of ptr is:0


//Arithmetic pointer
//#include<iostream>
//using namespace std;
//const int MAX=3;
//
//int main(){
//	int var[MAX]={10,200,300};
//	int *ptr;
//	
//	//let us have address of the first element in pointer
//	ptr=var;
//	int i=0;
//	
//	while(ptr<=&var[MAX-1]){
//		cout<<"Address of var:["<<i<<"]=";
//		cout<<ptr<<endl;
//		
//		cout<<"value of var ["<<i<<"]=";
//		cout<<*ptr<<endl;
//		
//		//pointer to the previous location
//		ptr++;
//		i++;
//	}
//	return 0;
//}
////output
//Address of var:[0]=0x6ffe00
//value of var [0]=10
//Address of var:[1]=0x6ffe04
//value of var [1]=200
//Address of var:[2]=0x6ffe08
//value of var [2]=300


//pointer to pointer
//#include<iostream>
//using namespace std;
//int main(){
//	int var;
//	int *ptr;
//	int **pptr;
//	
//	var=3000;
//	
//	//take the address of var
//	ptr=&var;
//	
//	//take the address of ptr using adress of operator & 
//	pptr=&ptr;
//	
//	//take the value using pptr
//	cout<<"value of var:"<<var<<endl;
//	cout<<"value available ar *ptr:"<<*ptr<<endl;
//	cout<<"value available at **pptr:"<<**pptr<<endl;
//	
//	return 0;
//}
//output
//value of var:3000
//value available ar *ptr:3000
//value available at **pptr:3000
