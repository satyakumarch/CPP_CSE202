#include<iostream>
using namespace std;
int main(){
	int **p,nr,nc,r,c;
	cout<<"Enter no of rows and column:";
	cin>>nr>>nc;
	p=new int*[nr];
	for(r=0;r<nr;r++) p[r]=new int[nc];
	cout<<"Enter "<<nr*nc<<" element:";
	for(r=0;r<nr;r++)
	for(c=0;c<nc;c++)

	cin>>p[r][c];
		cout<<"Enter element:";
	for(r=0;r<nr;r++){
		for(c=0;c<nc;c++){
			
		}
		cout<<p[r][c]<<endl;
	}
	cout<<endl;
	
}
