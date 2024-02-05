#include <iostream>
#include <iomanip>
using namespace std;


class Vehicle {  //base class
public:
    Vehicle() {
    	cout<<"Enter distance and time:"<<endl;
        cin >> distance >> time;
    }

protected:
    float distance;
    float time;
};

class Car : public Vehicle { //child class: base class

public:
    void calculateSpeed() {
        if (time == 0.0) {
        cout << "Time taken cannot be zero." << endl;
            return;
        }

        float speed = distance / time;
        cout << fixed <<setprecision(2);
        cout << "Speed of car: " << speed << " km/hr" << endl;
    }
};

int main() {
    Car car;
    car.calculateSpeed();

    return 0;
}
//15.0 5.0
//Speed of car: 3.00000 km/hr
