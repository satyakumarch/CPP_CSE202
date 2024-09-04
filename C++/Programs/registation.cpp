#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;
class Vehicle{
	private:
		char registationnumber[20];
		char make[50];
		char model[50];
		int yearofmanufacture;
		
		public:
			//parametrized constructor
			Vehicle(const char* regnum,const char* vehiclemake,const char* vehiclemodel,int year){
				strcpy(registationnumber,regnum);
				strcpy(make,vehiclemake);
				strcpy(model,vehiclemodel);
				yearofmanufacture=year;
			}
			//member function to display vehicle details
			void displaydetails(){
				cout<<"registation number:"<<registationnumber<<endl;
				cout<<"make:"<<make<<endl;
				cout<<"model:"<<model<<endl;
				cout<<"year of manufacture:"<<yearofmanufacture<<endl;
				
			}
};
int main(){
	char regnum[20];
	char vehiclemake[50];
	char vehiclemodel[50];
	int year;
	
	//input vehicle
	cout<<"Enter the registation number:";
	cin.getline(regnum,20);
	cout<<"Enter the company to make it:";
	cin.getline(vehiclemake,50);
	cout<<"Enter the model name:";
	cin.getline(vehiclemodel,50);
	cout<<"Enter the year to manufacture:";
	cin>>year;
	
	//create a vehicle object with input details
	Vehicle vehicle(regnum,vehiclemake,vehiclemodel,year);
	
	
	//dispaly vehicle data
	vehicle.displaydetails();
	return 0;
	
}
//output
// Enter the registation number:456938
// Enter the company to make it:TATA
// Enter the model name:TATA23412QAWE
// Enter the year to manufacture:2013
// registation number:456938
// make:TATA
// model:TATA23412QAWE
// year of manufacture:2013
