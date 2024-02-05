#include <iostream>
#include <iomanip>
using namespace std;

class StockItem {
public:
    StockItem(int code, int qty, double price) {
        itemCode = code;
        quantity = qty;
        pricePerUnit = price;
    }

    double getTotalPrice() {
        return quantity * pricePerUnit;
    }

    void display() {
        cout <<fixed <<setprecision(2);
        cout << "Total Price of the Stock: " << getTotalPrice() << endl;
    }

private:
    int itemCode;
    int quantity;
    double pricePerUnit;
};

int main() {
    int itemCode, quantity;
    double pricePerUnit;

    cin >> itemCode >> quantity >> pricePerUnit;

    StockItem stockItem(itemCode, quantity, pricePerUnit);

    stockItem.display();

    return 0;
}
//103
//10
//150.0
//Total Price of the Stock: 1500.00

8
20
100.0
Total Price of the Stock: 2000.00
