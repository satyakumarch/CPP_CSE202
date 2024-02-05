//#include<bits/stdc++.h>
//#include<iostream>
//using namespace std;
//class color{
//	public:
//		virtual void paint(){
//			cout<<"invalid choice"<<endl;
//		}
//};
//class redpaint:public color{
//	public:
//		void paint() override{
//		cout<<"i am painting with red color:"<<endl;
//		}
//};
//class bluepaint:public color{
//	public:
//		void paint() override{
//		cout<<"i am painting with blue color:"<<endl;
//		}
//};
//int main(){
//	
//	char choice;
//	cin>>choice;
//	color* selectedcolor;
//	
//	if(choice=='R'|| choice=='r'){
//		selectedcolor=new redpaint;
//	} else if(choice =='B'|| choice=='b'){
//	selectedcolor=new bluepaint;
//}else{
//	selectedcolor=new color;
//}
//selectedcolor->paint();
//delete selectedcolor;
//return 0;
//}
//output
//r
//i am painting with red color:



//function overrloading   for multiplication
//#include<iostream>
//using namespace std;
//class fun{
//	public:
//		int fun1(int num1,int num2){
//			return num1+num2;
//		}
//		int fun1(int num1,int num2,int num3){
//			return num1*num2*num3;
//		}
//};
//int main(){
//	fun obj;
//	int i,n;
//	cout<<"Enter the number :"<<endl;
//	cin>>n;
//	int arr[n];
//	cout<<"Enter "<<n<<" element:";
//	for(int i=0;i<n;i++)
//	cin>>arr[i];
//	if(n==2)
//	cout<<obj.fun1(arr[0],arr[1]);
//	else if(n==3)
//	cout<<obj.fun1(arr[0],arr[1],arr[2]);
//	else
//	cout<<"invalid input:";
//	return 0;
//}
//
//output
//Enter the number :
//3
//Enter 3 element:5 6 4
//120

//#include<iostream>
//#include<string>
//using namespace std;
//class vehicle{
//	public:
//		void move(string s1){
//			cout<<s1<<endl;
//		}
//};
//class motorbile:public vehicle{
//	public:
//		void move(string s2){
//			cout<<s2<<endl;
//		}
//};
//int main(){
//	string str1,str2;
//	cin>>str1>>str2;
//	vehicle v;
//	v.move(str1);
//	vehicle v1;
//	v1.move(str2);
//}
// 

//#include<iostream>
//#include<string>
//using namespace std;
//class fitnessdata{
//	public:
//		string name;
//		double weight;
//		
//		fitnessdata(const string& n,double w):name(n),weight(w){}
//		void updatedweight(double newweight){
//			weight=newweight;
//		}
//		void displayfitnessinfo(){
//			cout<<"updated fitness information"<<endl;
//			cout<<"Name:"<<name<<endl;
//			cout<<"weight"<<weight<<endl;
//		}
//};
//int main(){
//	string name;
//	double initialweight, updatedweight;
//	cin>>name>>initialweight>>updatedweight;
//	fitnessdata meenafitness(name,initialweight);
//	
//	double* weightptr =&meenafitness.weight;
//	*weightptr=updatedweight;
//	
//	meenafitness.displayfitnessinfo();
//	return 0;
//}
//output
//ram
//15
//16
//updated fitness information
//Name:ram
//weight16


//#include<iostream>
//#include<string>
//using namespace std;
//class student{
//	public:
//		string name;
//		int roll;
//		int mark[5];
//		int totalmark;
//		
//	student(){
//	totalmark=0;
//	}
//	void calculatetotalmark(){
//		for(int i=0;i<5;i++){
//			totalmark+=mark[i];
//		}
//	}
//	void displayreportcard(){
//		cout<<"Name:"<<name<<endl;
//		cout<<"Roll number:"<<roll<<endl;
//		cout<<"Total marks:"<<totalmark<<endl;
//	}
//};
//
//int main(){
//	int n;
//	cin>>n;
//	student student[n];
//	for(int i=0;i<n;i++){
//		cin>>student[i].name;
//		cin>>student[i].roll;
//		for(int j=0;j<5;j++){
//			cin>>student[i].mark[j];
//		}
//		student[i].calculatetotalmark();
//	}
//	cout<<"student report card:"<<endl;
//	for(int i=0;i<n;i++){
//		student[i].displayreportcard();
//	}
//	return 0;
//}










