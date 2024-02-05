#include<iostream>
#include<string>
using namespace std;

class cars{
	private:
		//data member
		string company_name;
		string model_name;
		string fuel_type;
		float mileage;
		double price;
		
	public:
		//default constructor
		cars(){
			cout<<"default constrictor called:"<<endl<<endl;
			company_name="Toyata";
			
		}
		//parametrized constructor
		cars(string cname,string mname,string ftype,float m,double p)

		{
			cout<<"parametrized constructor called:"<<endl;
			company_name=cname;
			model_name=mname;
			fuel_type=ftype;
			mileage=m;
			price=p;	
		}
		//copy constructor
		cars(cars &obj)
		{
			cout<<"copy constructor called:"<<endl;
			company_name=obj.company_name;
			model_name=obj.model_name;
			fuel_type=obj.fuel_type;
			mileage=obj.mileage;
			price=obj.price;	
		}
		//member function
		void setData(string cname,string mname,string ftype,float m,double p)
		{
			company_name=cname;
			model_name=mname;
			fuel_type=ftype;
			mileage=m;
			price=p;
			
		}
		void displaydata()
		{
			cout<<"car properties:"<<endl;
			cout<<"car company name:"<<company_name<<endl;
			cout<<"car company model:"<<model_name<<endl;
			cout<<"car fuel type:"<<fuel_type<<endl;
			cout<<"car mileage:"<<mileage<<endl;
			cout<<"car price:"<<price<<endl<<endl;
		}
		
		//destructor
		~cars(){
			cout<<"Destructor called:"<<endl;
		}
		
};
int main(){
	cars car1,car2("toyata","fortuner","diesel",10,350000);
	car1.setData("toyata","altis","petrol",15.5,1500000);
	car1.displaydata();
	car2.displaydata();
	cars car3=car1;
	car3.displaydata();
	return 0;
}

