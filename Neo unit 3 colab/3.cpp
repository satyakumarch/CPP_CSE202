#include <iostream>

class Money {
public:
    Money() : rupee(0), paise(0) {}

    void setRupee(int r) {
        rupee = r;
    }

    void setPaise(int p) {
        paise = p;
        // Adjust rupees if paise exceeds 99
        if (paise > 99) {
            int extraRupees = paise / 100;
            rupee += extraRupees;
            paise %= 100;
        }
    }

    int getRupee() const {
        return rupee;
    }

    int getPaise() const {
        return paise;
    }

    // Function to display the money in the required format
    void display() const {
        std::cout << rupee << "." << (paise < 10 ? "0" : "") << paise << std::endl;
    }

private:
    int rupee;
    int paise;
};

int main() {
    int rupee1, paise1, rupee2, paise2;

    while (std::cin >> rupee1 >> paise1) {
        Money money1, money2;

        money1.setRupee(rupee1);
        money1.setPaise(paise1);

        std::cin >> rupee2 >> paise2;

        money2.setRupee(rupee2);
        money2.setPaise(paise2);

        Money totalMoney;

        totalMoney.setRupee(money1.getRupee() + money2.getRupee());
        totalMoney.setPaise(money1.getPaise() + money2.getPaise());

        totalMoney.display();
    }

    return 0;
}
//output
//50 85
//42 65
//93.50
