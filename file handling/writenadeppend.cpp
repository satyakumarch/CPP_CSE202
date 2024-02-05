#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream myfile;
	myfile.open("satya.txt",ios::out);//write 
		if(myfile.is_open()){
			myfile<<"write a file"<<endl;
			myfile<<"hello world"<<endl;  
			myfile<<"hi, how are you?"<<endl<<endl<<endl;
			myfile.close();
		}
	myfile.open("satya.txt",ios::app);//append
	if(myfile.is_open()){
	myfile<<"Append a file"<<endl;
	myfile<<"lovely professional university"<<endl;
	myfile<<"Welcome to my computer coding class"<<endl;
	myfile.close();	
	}
	myfile.open("satya.txt",ios::in);
	if(myfile.is_open()){
		string line;
		while(getline(myfile,line)){
			cout<<line<<endl;
		
		}
		
			}

myfile.close();	
return 0;
}

//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//int main(){
//	fstream myfile;
//	myfile.open("satya.txt",ios::out);
//	if (myfile.is_open()){
//		myfile<<"hello how are you?"<<endl;
//		
//	}
//	myfile.close();
//	myfile.open("satya.txt",ios::app);
//	if(myfile.is_open()){
//		myfile<<"radhe radhe"<<endl;
//		myfile<<"jai sri krishna"<<endl;
//	}
//	myfile.close();
//	
//	myfile.open("satya.txt",ios::in);
//	if(myfile.is_open()){
//		string line;
//		while(getline(myfile,line)){
//			cout<<line<<endl;
//		}
//	}
//	myfile.close();
//	}
