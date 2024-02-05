//#include<bits/stdc++.h>
//#include<iostream>
//using namespace std;
//int main(){
//	int x=-1;
//	try{
//		if(x<0){
//			
//		}else{
//			cout<<x;
//			
//		}
//	}
//		catch(int x){
//			cout<<"exception occured: through value us"<<x<<endl;
//			
//		}
//	
//	return 0;
//}
#include<iostream>
using namespace std;
class myexception{
};
int main(){
	try{
		try{
			throw myexception();
			
		}
		catch (int x){
			cout<<"inner catch block:"<<x<<endl;
			
		}
	}
	catch (myexception& e){
		cout<<"outer catch block"<<endl
	}
	return 0;
}
