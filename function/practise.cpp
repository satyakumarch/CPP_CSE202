//#include<iostream>
//#include<climits>
//using namespace std;
//
//int secondsmallest(int arr[],int n){
//	if(n<2)
//	return -1;
//	
//	int small=INT_MAX;
//	int second_small=INT_MAX;
//	
//	for(int i=0;i<n;i++){
//		 if(arr[i]<small){
//			second_small=small;
//			small=arr[i];
//		}
//		else if(arr[i]<second_small && arr[i]!=small){
//			second_small=arr[i];
//		}
//		
//	}
//	return second_small;
//	
//}
//
//int secondlargest(int arr[],int n){
//	if(n<2)
//		return -1;
//	
//	int large=INT_MIN;
//	int second_large=INT_MIN;
//	
//	for(int i=0; i<n; i++){
//		if(arr[i] > large){
//			second_large = large;
//			large = arr[i];
//			
//		}
//		else if(arr[i] > second_large && arr[i] != large){
//			second_large=arr[i];
//		}
//	}
//	return second_large;
//	
//}
//
//int main(){
//	int n;
//	cout<<"Enter the number:";
//	cin>>n;
//	
//	int arr[n];
//	cout<<"Enter "<<n<<" Element:";
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//			
//	int Ss=	secondsmallest(arr, n);
//	int Sl=secondlargest(arr, n);
//	
//	cout<<"The second smallest element is:"<<Ss<<endl;
//	cout<<"The second largest element is:"<<Sl<<endl;
//		return 0;
//}
//
//
//OUTPUT
//Enter the number:5
//Enter 5 Element:1 2 4 5 3
//The second smallest element is:2
//The second largest element is:4








//#include<iostream>
//#include<vector>
//using namespace std;
//
//int missingnumber(vector<int> &a,int n){
//	int xor1=0,xor2=0;
//	
//	for(int i=0;i<n-1;i++){
//		xor2=xor2^a[i];
//		xor1=xor1^(i+1);
//	
//}
//		xor1=xor1^n;
//		return (xor2^xor1);
//	
//	
//}
//int main(){
//	
//	int n;
//	cout<<"Enter the number of the elements:";
//	cin>>n;
//	
//	vector<int> a(n-1);
//	cout<<"Enter "<<n-1<<" Element:";
//	for(int i=0;i<n-1;i++){
//		cin>>a[i];
//	}
//	
//		
//		int ans=missingnumber(a,n);
//		cout<<"The missing number is:"<<ans;
//	return 0;
//}
//
//output
//Enter the number of the elements:7
//Enter 6 Element:1 2 3 4 6 7
//The missing number is:5



//#include<iostream>
//#include<vector>
//using namespace std;
//
//int getsingleElement(vector<int> &arr){
//	int n = arr.size();
//	
//	int xor1=0;
//	for(int i=0;i<n;i++){
//		xor1=xor1^arr[i];
//	}
//	return xor1;
//}
//
//int main(){
//	int n;
//	cout<<"Enter the number of the element:";
//	cin>>n;
//	
//     vector<int> arr(n);
//     cout<<"Enter "<<n<<" Element";
//     for(int i=0;i<n;i++){
//     	cin>>arr[i];
//	 }
//	 int ans=getsingleElement(arr);
//	 cout<<"The missing element is:"<<ans<<endl;
//	 return 0;
//}
//
//output
//Enter the number of the element:5
//Enter 5 Element1 2 1 2 4
//The missing element is:4
//





