#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Money {
public:
    Money() : rupee(0), paisa(0) {}

    void setRupee(int r) {
        rupee = r;
    }

    void setPaisa(int p) {
        paisa = p;
        // adjust rupees if paisa exceeds 99
        if (paisa > 99) {
            int extraRupees = paisa / 100;
            rupee += extraRupees;
            paisa %= 100;
        }
    }

    int getRupees() const {
        return rupee;
    }

    int getPaisa() const {
        return paisa;
    }

    // function to display the money in the required format
    void display() const {
        cout << rupee << " " << (paisa < 10 ? "0" : "") << paisa << endl;
    }

private:
    int rupee;
    int paisa;
};

int main() {
    int rupee1, paisa1, rupee2, paisa2;
    while (cin >> rupee1 >> paisa1) {
        Money money1, money2;

        money1.setRupee(rupee1);
        money1.setPaisa(paisa1);

        cin >> rupee2 >> paisa2;

        money2.setRupee(rupee2);
        money2.setPaisa(paisa2);

        Money totalMoney;

        totalMoney.setRupee(money1.getRupees() + money2.getRupees());
        totalMoney.setPaisa(money1.getPaisa() + money2.getPaisa());

        totalMoney.display();
    }
    return 0;
}
output
245 52
152 85
398 37
