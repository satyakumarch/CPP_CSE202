#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class rectangle{
	public:
		Rectangle(int w, int h):width(w),height(h){
		bool operator==(const Rectangle& other){
		return(width==other.width)&&(height==other.height);
		}
		private:
			int width;
			int height;
		}
};
int main(){
	int w1,h1,w2,h2;
	cin>>w1>>h1;
	cin>>w2>>h2;
	
	Rectangle rectangle1(w1,h1);
	Rectangle rectangle2(w2,h2);
	
	if(rectangle1==rectangle2)
	{
		cout<<"Rectangle 1 and rectangle 2 are equal in size:"<<endl;
	}
	else
	{
	 cout<<"Rectangle 1 and rectangle 2 are not equal in size:"<<endl;
				
	}
	return 0;
}
// output
// 12 20
// 12 20
// Rectangle 1 and rectangle 2 are equal in size:



