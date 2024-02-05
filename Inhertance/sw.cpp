#include<iostream>
using namespace std;
class father
{
	protected:
	string surname = "Kushwaha";
};

class son1:father
{
	string Name = "mohan";
	public:
	void show(){
		cout<<Name<<" "<<surname<<"\n";
	}
};
class son2:father
{
	string name="Raghav";
	public:
	void disp(){
		cout<<name<<" "<<surname;
	}
};
int main()
{
son1 S1;
son2 S2;
S1.show();
S2.disp();	
	return 0;
}
#include<iostream>
using namespace std;
class student
{
	private:
		int roll_no;
		protected:
			char section_no[10];
			public:
				void 
}

