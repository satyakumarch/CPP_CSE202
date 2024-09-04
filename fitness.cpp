//write a program that utilize the "fitness data" class allow meena to 
//input and update herr fitness data. use a pointer to data member to access and modify the weight field.

//#include <iostream>
//#include <string>
//using namespace std;
//
//class FitnessData {
//public:
//    string name;
//    double weight;
//
//    FitnessData(const string& n, double w) : name(n), weight(w) {}
//
//    void updateWeight(double newWeight) {
//        weight = newWeight;
//    }
//
//    void displayFitnessInfo() {
//        cout << "Updated fitness information:" << endl;
//        cout << "Name: " << name << endl;
//        cout << "Weight: " << weight <<endl;
//    }
//};
//
//int main() {
//    string name;
//    double initialWeight, updatedWeight;
//
//    cin >> name >> initialWeight >> updatedWeight;
//
//    FitnessData meenaFitness(name, initialWeight);
//
//    // Use a pointer to update the weight field
//    double* weightPtr = &meenaFitness.weight;
//    *weightPtr = updatedWeight;
//
//    meenaFitness.displayFitnessInfo();
//
//    return 0;
//} 

//output
//meena
//60.5
//65.2
//Updated fitness information:
//Name: meena
//Weight: 65.2

#include<iostream>
#include<string>
using namespace std;
 class fitnessdata{
 	public:
 		string name;
 		double weight;
fitnessdata(const string&  n,double w):name(n),weight(w){};

void updatedweight(double newweight){
	weight=newweight;
}
void dispalyinfo(){
	cout<<"updated infrmation"<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"weight:"<<weight<<endl;
}
 };
 int main(){
 	string  name;
 	double initialweight,updatedweight;
 	cout<<"Enter the name:";
 	cin>>name;
	cout<<"Enter the initialweight";
	cin>>initialweight;
	cout<<"Enter the updatedweight";
	cin>>updatedweight;
 	
 	fitnessdata satyafitness(name,initialweight);
 	
 	double* weightptr=&satyafitness.weight;
 	*weightptr=updatedweight;
 	
 	satyafitness.dispalyinfo();
 }



	
