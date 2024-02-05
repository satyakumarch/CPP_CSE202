#include<bits/stdc++.h>
#include<iostream>
using namespace std;
const int SIZE =10;
class safe {
	private:
		int arr[SIZE];
		public:
			safe(){
				register int i;
				for(i=0;i<SIZE;i++){
					arr[i]=i;
					
				}
			}
			int &operator[](int i){
				if(i>SIZE)
			}
};


