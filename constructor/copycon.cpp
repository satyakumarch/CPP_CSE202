// #include<iostream>
//using namespace std;
//class rectangle {
//	int l,b;
//	public:
//		rectangle(int x,int y):l(x),b(y){
//		}
//		int area(){
//			return (l*b);
//		}
//};
//int main(){
//	int a,b;
//	cout<<"Enter the number a :";
//	cin>>a;
//	cout<<"Enter the number b :";
//	cin>>b;
//	
//	rectangle r(a,b);
//	cout<<"Area:"<<r.area();
//}


#include<iostream>
#include<math.h>
using namespace std;
class rectangle {
	int l,b,h;
	public:
		rectangle(int x,int y,int z):l(x),b(y),h(z){
			
		}
		int	volume(){
		  return (l*b*h);
		}				
};
int main(){
	int m,n,o;
	cout<<"Enter m:"<<m<<endl<<"Enter n:"<<n<<endl<<"Enter o:"<<o<<endl;
	cin>>m;
	cin>>n;
	cin>>o;
	
	rectangle r(m*n*o);
	cout<<"The volume of the rectangle is :"<<d.volume();
}


