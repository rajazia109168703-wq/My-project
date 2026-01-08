#include <iostream>
#include <iomanip>

using namespace std;
double calculateElectricityBill(int unitsConsumed, int allowedUsage) {
    double billAmount = 0.0;
    
    if (unitsConsumed <= allowedUsage) 
    {
        // Normal rate for usage within allowed limit
        billAmount = unitsConsumed * 5.0;
    } else {
        // Higher rate with 29% sales tax for exceeding usage
        billAmount = unitsConsumed * 10.0;
        billAmount += billAmount * 0.29;  // Adding 29% sales tax
    }
    
    return billAmount;
}

int main() {
    int unitsConsumed, allowedUsage;
    char choice;
    
    do {
        cout << "Enter the allowed monthly electricity usage (in units): ";
        cin >> allowedUsage;
        cout << "Enter the total electricity units consumed: ";
        cin >> unitsConsumed;
        double electricityBill = calculateElectricityBill(unitsConsumed, allowedUsage);
        
        double totalBill = electricityBill + 39.0;
        
        cout << fixed << setprecision(2);
        cout << "\nElectricity Bill: $" << electricityBill << endl;
        cout << "Monthly Maintenance Fee: $39.00" << endl;
        cout << "Total Amount Due: $" << totalBill << endl;
        
        cout << "\nDo you want to calculate another electricity bill? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    
    cout << "Program terminated." << endl;
    return 0;
}
