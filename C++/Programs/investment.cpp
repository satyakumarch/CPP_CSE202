#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
using namespace std;
class Investment{
	public:
		Investment(double initial,double final):initialInvestment(initial),finalvalue(final){}
		virtual void calculateReturns()=0;
		void displayInvestmentinfo(const string&type){
			cout<<"Type:"<<type<<endl;
			cout<<"initial investment:"<<fixed<<setprecision(2)<<initialInvestment<<endl;
			cout<<"Final value:"<<finalvalue<<endl;
			cout<<"Return :"<<fixed<<setprecision(2)<<returns<<"%"<<endl;
			
		}
		protected:
			double initialInvestment;
			double finalvalue;
			double returns;
};
class stock:public Investment{
	public:
		stock(double initial,double final):Investment(initial,final){}
		
		void calculateReturns() override{
		returns=((finalvalue-initialInvestment)/initialInvestment)*100;
		}
};
class Bond:public Investment{
	public:
		Bond(double initial,double final):Investment(initial,final){}
		
		void calculateReturns() override{
		returns =((finalvalue-initialInvestment)/initialInvestment)*100;
		}
};
int main(){
	double initialstock,finalstock,initialbond,finalbond;
	cin>>initialstock;
	cin>>finalstock;
	cin>>initialbond;
	cin>>finalbond;
	
	stock stockinvestment(initialstock,finalstock);
	Bond bondInvestment(initialbond,finalbond);
	
	stockinvestment.calculateReturns();
	bondInvestment.calculateReturns();
	
	stockinvestment.displayInvestmentinfo("stock");
	bondInvestment.displayInvestmentinfo("bond");
	
	return 0;
	
}
// output
// 1000
// 1500
// 2000
// 5000
// Type:stock
// initial investment:1000.00
// Final value:1500.00
// Return :50.00%
// Type:bond
// initial investment:2000.00
// Final value:5000.00
// Return :150.00%c  

