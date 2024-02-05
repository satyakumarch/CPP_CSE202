#include <iostream>
using namespace std;

class Time {
public:
    Time(int seconds) {
        hours = seconds / 3600;
        seconds %= 3600;
        minutes = seconds / 60;
        seconds %= 60;
        this->seconds = seconds;
    }

    void display() const {
        cout << hours << ":" << minutes << ":" << this->seconds << endl;
    }

private:
    int hours;
    int minutes;
    int seconds;
};

int main() {
    int inputSeconds;
    cin >> inputSeconds;

    Time time(inputSeconds);

    time.display();

    return 0;
}
//12345
//3:25:45

52468
14:34:28
