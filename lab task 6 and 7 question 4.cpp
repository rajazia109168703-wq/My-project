#include <iostream>
using namespace std;

int main() {
    int jobLevel, experience;
    char remote;
    double basicSalary = 0, experienceBonus = 0, remoteBonus = 0, grossSalary, tax = 0, taxDeduction, finalSalary;

    cout << "Enter job level (1-4): ";
    cin >> jobLevel;
    cout << "Enter years of experience: ";
    cin >> experience;
    cout << "Working in remote area? (yes/no): ";
    cin >> remote;
    switch (jobLevel) {
        case 1: basicSalary = 120000; break;
        case 2: basicSalary = 85000; break;
        case 3: basicSalary = 60000; break;
        case 4: basicSalary = 40000; break;
        default: cout << "Invalid job level!"; return 1;
    }
    if (experience >= 15) experienceBonus = 0.25;
    else if (experience >= 10) experienceBonus = 0.15;
    else if (experience >= 5) experienceBonus = 0.10;
    else experienceBonus = 0;

    if (remote == 'y' || remote == 'Y') remoteBonus = 0.08;

    grossSalary = basicSalary * (1 + experienceBonus + remoteBonus);
    
    if (grossSalary >= 150000) tax = 0.30;
    else if (grossSalary >= 100000) tax = 0.20;
    else if (grossSalary >= 60000) tax = 0.10;

    taxDeduction = grossSalary * tax;
    finalSalary = grossSalary - taxDeduction;
    cout << "\n--- Salary Details ---" << endl;
    cout << "Basic Salary: " << basicSalary << endl;
    cout << "Experience Bonus: " << experienceBonus * 100 << "%" << endl;
    cout << "Remote Bonus: " << remoteBonus * 100 << "%" << endl;
    cout << "Gross Salary: " << grossSalary << endl;
    cout << "Tax Deduction: " << taxDeduction << endl;
    cout << "Final Salary: " << finalSalary << endl;

    return 0;
}
