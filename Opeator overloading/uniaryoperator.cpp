#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class coordiante{
	int X,Y;
	public:
	    coordiante(int x,int y){
			X=x;
			Y=y;
		}
		void operator -(){
			X--;
			Y--;
			cout<<"\ndecrement coocrdiante are:"<<"X="<<X<<" Y="<<Y<<endl;
		}
};
int main(){
	int m,n;
	cout<<"m:";
	cin>>m;
	cout<<"n:";
	cin>>n;
	coordiante C(m,n);
	
	-C;
}
m:45
n:12

decrement coocrdiante are:X=44 Y=11


