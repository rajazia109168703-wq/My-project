#include <iostream>
using namespace std;

int main() {
    double amount, convertedAmount;
    int choice;
    
    const double USD_TO_PKR = 280.0;
    const double USD_TO_POUND = 0.79;
    const double USD_TO_EUROS = 0.93;
    
    cout << "Currency Converter (USD to):\n";
    cout << "1. Pakistani Rupee (PKR)\n";
    cout << "2. British Pound (GBP)\n";
    cout << "3. Euros (EUR)\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;
    cout << "Enter amount in USD: ";
    cin >> amount;
    switch (choice) {
        case 1:
            convertedAmount = amount * USD_TO_PKR;
            cout << amount << " USD = " << convertedAmount << " PKR\n";
            break;
        case 2:
            convertedAmount = amount * USD_TO_POUND;
            cout << amount << " USD = " << convertedAmount << " GBP\n";
            break;
        case 3:
            convertedAmount = amount * USD_TO_EUROS;
            cout << amount << " USD = " << convertedAmount << " EUR\n";
            break;
        default:
            cout << "Invalid choice! Please select 1, 2, or 3.\n";
    }
    
    return 0;
}
