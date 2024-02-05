//#include <iostream>
//
//class Rectangle {
//public:
//    Rectangle(int w, int h) : width(w), height(h) {}
//
//    bool operator==(const Rectangle& other) const {
//        return (width == other.width) && (height == other.height);
//    }
//
//private:
//    int width;
//    int height;
//};
//
//int main() {
//    int w1, h1, w2, h2;
//
//    std::cin >> w1 >> h1;
//    std::cin >> w2 >> h2;
//
//    Rectangle rectangle1(w1, h1);
//    Rectangle rectangle2(w2, h2);
//
//    if (rectangle1 == rectangle2) {
//        std::cout << "Rectangle 1 and Rectangle 2 are equal in size." << std::endl;
//    } else {
//        std::cout << "Rectangle 1 and Rectangle 2 are not equal in size." << std::endl;
//    }
//
//    return 0;
//}
//12 12
//12 12
//Rectangle 1 and Rectangle 2 are equal in size.
////output
////10 20
////20 30
////Rectangle 1 and Rectangle 2 are not equal in size.


#include<iostream>
using namespace std;
class Rectangle{
	public:
		Rectangle( int h,int w ):height(h),width(w){}
		
		bool operator=(const Rectangle& other) const{
			return (height==other.height)&&(width==other.width);
		}
		
	private:
		int height;
		int width;
};
int main(){
	int h1,w1,h2,w2;
	
	cin>>h1>>w1;
	cin>>h2>>w2;
	
	Rectangle rectangle1(h1,w1);
	Rectangle rectangle2(h2,w2);
	
	if(rectangle1=rectangle2){
		cout<<"Rectangle are equal:";
	}else{
		cout<<"rectangle are not equal:";
	}
	return 0;
}
