#include <iostream>
using namespace std;

int main() {
    int number, limit;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the limit for the multiplication table: ";
    cin >> limit;
    cout << "Multiplication table of " << number << " up to " << limit << ":" << endl;
    for (int i = 1; i <= limit; i++) {
        cout << number << " * " << i << " = " << (number * i) << endl;
    }

    return 0;
}
