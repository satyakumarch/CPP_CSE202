//#include<iostream>
//using namespace std;
//inline int product(int a,int b){
//	//no recommended to use below lines with inline function
////	static int c=0;//this exdcute only once
////	c=c+1;c=c+1;//next time this function is run ,value of c will retained
//	return a*b;
//}
//float moneyreceived(int currentmoney, float factor=1.04){
//return currentmoney * factor;	
//	
//}
//int main(){ 
//	int a,b;
////	cout<<"Enter the value of a and b:";
////	cin>>a>>b;
//	int money=100000;
//	cout<<"if you have "<<money<<" rs in your bank account ,you will receive "<<moneyreceived(money)<< "rs after 1 year"<<endl;
//	cout<<"For VIP:if you have "<<money<<" rs in your bank account ,you will receive "<<moneyreceived(money,1.1)<< "rs after 1 year";
////	cout<<"The product of a and b is:"<<product(a,b)<<endl;
////	cout<<"The product of a and b is:"<<product(a,b)<<endl;
////	cout<<"The product of a and b is:"<<product(a,b)<<endl;
////	cout<<"The product of a and b is:"<<product(a,b)<<endl;
////	cout<<"The product of a and b is:"<<product(a,b)<<endl;
////	cout<<"The product of a and b is:"<<product(a,b)<<endl;
//	return 0;
//
//}



#include <iostream>

class Cube {
private:
    double length;
    double breadth;
    double height;

public:
    void setLength(double l) {
        length = l;
    }

    void setBreadth(double b) {
        breadth = b;
    }

    void setHeight(double h) {
        height = h;
    }

    double getVolume() {
        return length * breadth * height;
    }
};

int main() {
    Cube cube;

    double l, b, h;
    std::cin >> l >> b >> h;

    cube.setLength(l);
    cube.setBreadth(b);
    cube.setHeight(h);

    double volume = cube.getVolume();

    std::cout << volume << std::endl;

    return 0;
}

