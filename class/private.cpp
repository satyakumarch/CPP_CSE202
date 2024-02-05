 #include<iostream>
using namespace std;
class Room{
	
	private:
	int length;
	int breadth;
	int height;
	
	public:
		void initdata(int len,int brth,int hth){
		length=len;
		breadth=brth;
		height=hth;	
		}
		calculatearea(){
			return length*breadth;
		}
		calculatevolume(){
			return  length*breadth*height;
		}
			
};
int main(){
	Room room1;
	room1.initdata(2,3,4);
	
	cout<<"Area is:"<<room1.calculatearea()<<endl;
	cout<<"Volume is:"<<room1.calculatevolume();
	
return 0;
}

