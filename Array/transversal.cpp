//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[5],size,i;
//	cout<<"Transveraing of array:"<<endl;
//	cout<<" ";
//	
//	cout<<"Enter size of array:";
//	cin>>size;
//	cout<<"Enter elements of the array:";
//	for(i=0;i<size;i++)
//	cin>>a[i];
//	{
//		cout<<"Elements of the array is:";
//		for(i=0;i<size;i++)
//		{
//			cout << a[i]<<" " ;
//		}
//	}
//	return 0;
//}
//output
//Transveraing of array:
// Enter size of array:5
//Enter elements of the array:1,2,3,4,5
//Elements of the array is:104800


#include<iostream>
using namespace std;
int main(){
	int a[5],size,i;
//	cout<<"Enter the number of array:"<<endl;
//	cout<<" ";
	cout<<"Enter the size of the array:"<<endl;
	cin>>size;
	cout<<"Enter the element of the array:"<<endl;
	for(int i;i<size;i++)
	cin>>a[i];
	{
		cout<<"Element of the array:";
		for(int i=0;i<size;i++)
	{
			cout<<a[i]<<" ";
	}
			}
}


















