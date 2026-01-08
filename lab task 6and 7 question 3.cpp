#include <iostream>
using namespace std;

int main() {
    double currentSalary, newSalary;
    int yearsOfService;
    cout << "Enter current salary: ";
    cin >> currentSalary;
    cout << "Enter years of service: ";
    cin >> yearsOfService;
    if (yearsOfService >= 5) { // assuming minimum service for bonus is 5 years
        double bonusPercentage;

        if (yearsOfService >= 10) {
            bonusPercentage = 0.15; // 15% for long service
        } else if (yearsOfService >= 5) {
            bonusPercentage = 0.10; // 10% for medium service
        } else {
            bonusPercentage = 0.0; // no bonus for short service
        }
        newSalary = currentSalary + (currentSalary * bonusPercentage);
    } else {
        // No increase for short service periods
        newSalary = currentSalary;
    cout << "Updated salary: " << newSalary << endl;

    return 0;
}
