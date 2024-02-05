#include <iostream>

class Bicycle {
protected:
    int gears;
    int speed;

public:
    Bicycle(int _gears, int _speed) : gears(_gears), speed(_speed) {}

    void applyBrakes(int decrement) {
        speed -= decrement;
    }

    void speedUp(int increment) {
        speed += increment;
    }

    void displayInfo() {
        std::cout << "No of gears are " << gears << std::endl;
        std::cout << "Speed of bicycle is " << speed << std::endl;
    }
};

class MountainBike : public Bicycle {
private:
    int seatHeight;

public:
    MountainBike(int _gears, int _speed, int _seatHeight) : Bicycle(_gears, _speed), seatHeight(_seatHeight) {}

    void displayInfo() {
        Bicycle::displayInfo();
        std::cout << "Seat height is " << seatHeight << std::endl;
    }
};

int main() {
    int gears, speed, seatHeight;
    std::cin >> gears >> speed >> seatHeight;

    MountainBike mountainBike(gears, speed, seatHeight);
    mountainBike.displayInfo();

    return 0;
}
output
69
50
12
No of gears are 69
Speed of bicycle is 50
Seat height is 12
