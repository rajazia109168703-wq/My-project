#include <iostream>
using namespace std;

int main() {
    int popA, popB;
    double growthA, growthB;
    cout << "Enter population of town A: ";
    cin >> popA;
    cout << "Enter growth rate of town A (in %): ";
    cin >> growthA;
    cout << "Enter population of town B: ";
    cin >> popB;
    cout << "Enter growth rate of town B (in %): ";
    cin >> growthB;
    
    int years = 0;
    for (; popA < popB; years++) {
        popA = popA + (popA * growthA / 100);
        popB = popB + (popB * growthB / 100);
    }
    
    cout << "The population of town A will be greater than or equal to town B after " << years << " years." << endl;
    cout << "Population of town A: " << popA << endl;
    cout << "Population of town B: " << popB << endl;
    
    return 0;
}
