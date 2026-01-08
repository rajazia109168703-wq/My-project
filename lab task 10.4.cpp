#include <iostream>
#include <limits>
using namespace std;

int main() {
    int N, i = 1;
    do {
        cout << "Enter a positive integer N: ";
        if (!(cin >> N)) {
            cout << "Invalid input. Please enter a numeric value.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else if (N <= 0) {
            cout << "Please enter a positive integer.\n";
        }
    } while (N <= 0);

    while (i <= N) {
        cout << i;
        if (i < N) {
            cout << " "; // add space between numbers
        }
        i++;
    }
    cout << endl; // newline after the sequence

    return 0;
}
