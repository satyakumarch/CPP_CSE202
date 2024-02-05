#include <iostream>
#include <iomanip>
using namespace std;

class CurrencyConverter {
public:
    CurrencyConverter(double conversionRate) {
        rate = conversionRate;
    }

    double convertToEuros(double usDollars) {
        return usDollars * rate;
    }

private:
    double rate;
};

int main() {
    double conversionRate, usDollars;

    cin >> conversionRate;
    cin >> usDollars;

    CurrencyConverter converter(conversionRate);
    double euros = converter.convertToEuros(usDollars);

    cout << fixed << setprecision(2);
    cout << "Converted amount in Euros (EUR): " << euros << " EUR" << endl;

    return 0;
}
//output
//120.5
//10.6
//Converted amount in Euros (EUR): 1277.30 EUR


