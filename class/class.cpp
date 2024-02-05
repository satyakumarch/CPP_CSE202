//#include<iostream>
//using namespace std;
//class X
//{
//	private:
//		int a;
//	public:
//		void Set_a(int a)
//		{
//			this->a=a;
//		}
//		void Print_a()
//		{
//		cout<<"The value of a is:"<<a;
//				
//		}
//};
//int main(){
//	X xobj; 
//	int a;//
//	cout<<"Enter the value of a:";
//	cin>>a;
//	xobj.Set_a(a);
//	xobj.Print_a();
//}


#include<iostream>
using namespace std;
class X{
	private:
		int a;
	public:
		void set_a(int a)
		{
			this->a=a;
		}
		void print_a()
		{
			cout<<"The value of a is:"<<a;
		}
};
int main(){
  X xobj;
  int a;
  cout<<"Enter the value of a:";
  cin>>a;
  xobj.set_a(a);
  xobj.print_a();
}
