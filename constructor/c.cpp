#include<iostream>
using namespace std;
class myclass{
	public:
		int x;
		myclass(){
			//x=0;
			cout<<"default constructor called:"<<endl;
			
		}
		myclass(int value){
			x=value;
			cout<<"parametrized destructor called:"<<endl;
		}
};
  
int main(){
	myclass obj1;
	myclass obj2(5);
	//obj.x=5;
	cout<<obj1.x<<" "<<obj2.x<<endl;
	return 0;
}
