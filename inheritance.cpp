#include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// //base class
// class shape{
// 	public:
// 		void setwidth(int w){
// 			width=w;
// 		}
// 		void setheight(int h){
// 			height=h;
// 		}
// 		protected:
// 			int width;
// 			int height;
// };
// //derived class
// class rectangle:public shape{
// 	public:
// 		int getarea(){
// 			return(width*height);
// 		}
// };
// int main(void){
// 	rectangle rect;
// 	rect.setheight(4);
// 	rect.setwidth(3);
// 	//print the area of the object
// 	cout<<"total area:"<<rect.getarea()<<endl;
// 	return 0;
// }


#include<iostream>
using namespace std;
	class shape{
		public:
		void setwidth(int w){
			width=w;
		}
		void setheight(int h){
			height=h;
		}
		protected:
		int height,width;
	};
	class rectangle:public shape{
		public:
		int getarea(){
			return(width*height);
		}
	};
	int main(){
		rectangle rect;
		rect.setheight(3);
		rect.setwidth(4);
		cout<<rect.getarea()<<endl;
		return 0;

	}
