#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Professor{
	public:
		Professor(int id=0,int salary=0):id_(id),salary_(salary){}
		void display() const{
		cout<<id_<<" "<<salary_<<endl;
		}
		bool issalarygreaterthanequal(int limit)
		const{
		return salary_>=limit;
		}
		private:
			int id_;
			int salary_;
			
		};
	int main(){
		int N;
		cin>>N;
		vector<Professor>professor;
		for(int i=0;i<N;i++){
			int id,salary;
			professor.push_back(Professor(id,salary));
			
		}
		int salarylimit=2000;
		
		for(int i=0;i<N;++i){
			if(professor[i].issalarygreaterthanequal(salarylimit)){
				professor[i].display();
				 
			}
		}
		return 0;
	}


