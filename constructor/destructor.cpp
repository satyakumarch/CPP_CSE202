#include<iostream>
using namespace std;
class Test
{
	public:
		Test()
		{
			cout<<"Object created"<<endl;
		}
		~Test()
		{
			cout<<"Object being destroyed:"<<endl;
		}
};
int main(){
	Test t;
	cout<<"program ending"<<endl;
	return 0;
	
}


