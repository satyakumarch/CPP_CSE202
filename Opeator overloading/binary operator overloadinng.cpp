//#include<iostream>
//
//using namespace std;
//class multiply
//{
//int first,second;
//public:
//	void getdata(int a,int b)
//	{
//		first=a;
//		second=b;
//	}
//	void display()
//	{
//		cout<<"first:"<<first<<endl<<"second:"<<second<<endl;
//		
//	}
//	multiply operator *(multiply c);
//};
//multiply multiply::operator *(multiply c) 
//{
//	multiply temp;
//	temp.first=first*c.first;
//	temp.second=second*c.second;
//	return temp;
//}
//int main(){
//	multiply obj1,obj2,obj3;
//	obj1.getdata(12,15);
//	obj2.getdata(5,6);
//	obj3=obj1*obj2;
//	obj3.display();
//	
//return 0;
//}


#include<iostream>

using namespace std;

class multiply
{
    int first, second;

public:
    void getdata()
    {
        cout << "Enter the first number: ";
        cin >> first;
        cout << "Enter the second number: ";
        cin >> second;
    }

    void display()
    {
        cout << "first: " << first << endl << "second: " << second << endl;
    }

    multiply operator *(multiply c);
};

multiply multiply::operator *(multiply c)
{
    multiply temp;
    temp.first = first * c.first;
    temp.second = second * c.second;
    return temp;
}

int main()
{
    multiply obj1, obj2, obj3;

    cout << "Enter values for obj1:" << endl;
    obj1.getdata();

    cout << "Enter values for obj2:" << endl;
    obj2.getdata();

    obj3 = obj1 * obj2;
    cout << "Result: " << endl;
    obj3.display();

    return 0;
}
output
Enter values for obj1:
Enter the first number: 5
Enter the second number: 6
Enter values for obj2:
Enter the first number: 4
Enter the second number: 6
Result:
first: 20
second: 36

