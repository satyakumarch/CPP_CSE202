//#include <iostream>
//#include <iomanip>
//using namespace std;
//class Speed {
//public:
//    Speed() {}
//
//    operator double() const {
//        double kmPerHour;
//        cin >> kmPerHour;
//        return kmPerHour * 1000.0 / 3600.0;
//    }
//};
//
//int main() {
//    Speed speed;
//    double speedMetersPerSecond = speed;
//
//    cout <<fixed << setprecision(3);
//    cout << speedMetersPerSecond << " m/s" <<endl;
//
//    return 0;
//}
////output
////20000
////5555.556 m/s


#include<iostream>
#include<iomanip>
using namespace std;

class Speed{
	public:
		Speed(){}
		operator double() const{
			double kmperhour;
			cin>>kmperhour;
			return kmperhour*1000.0/3600.0;
		
		}
		
};
int main(){
	Speed speed;
	double speedkmperhour=speed;
	cout<<fixed<<setprecision(2)<<endl;
	cout<<speedkmperhour<<"km/hr"<<endl;
	return 0;
}
