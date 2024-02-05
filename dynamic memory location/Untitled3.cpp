#include<iostream>
using namespace std;

class base{
	public:
		base(){
			cout<<"Constructing base\n";
		}
		~base(){
				cout<<"Destricting base\n";
			}
};

class derived:public base{
	public:
		derived()
		{
			cout<<"Constructing derived\n";
		}
		~derived(){
			cout<<"Destricting derived\n";
		}
};

int main()
{
	base *b =new derived;
	delete b;
	return 0;
}
