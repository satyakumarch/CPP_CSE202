//1)c++ has ability to provide the operators with the special meaning for a datatype .
//2)The mechanism of giving such special meaning to an operator is known as operator overloading.
//3)Opeartor overloading is a specific case of polymorphism.
//4)operator overloading refer giving special meaning to an existing operator
//5)In order to give additional meaning to the opertor we need to overload at by creating an 
//operator function
//6)an operator funtion defines the operation that the overloaded operator will perform when 4
//used with the objects of  a relative class.
//7)An operator function(system defined function ) can be member or non member (friend funtion)of a class.
//returntype classname :: operator #(argument list)
//{
//	Body_ _ _ _ _ 
//
//}
//8)we can overload all c++ operator except the following.
//
//1)class access
//operator(.,*);
//
//2)Scope resolution operator(::);
//3)Size of (operator)
//4)conditional operator

#include<iostream>
using namespace std;

class abc{
	private:
		int x,y,z;
		public:
			abc(int a,int b,int c)
			{
				x=a;
				y=b;
				z=c;
			}
			void display()
			{
				cout<<"x:"<<x;
				cout<<"y:"<<y;
				cout<<"z:"<<z;
			}
			void operator -()
			{
				x=-x;
				y=-y;
				z=-z;
			}
};
int main(){
	abc s(10,-20,30);
	cout<<"s:";
	s.display();
	-s;
	cout<<"s:";
	s.display();
	return 0;
}
