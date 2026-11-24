#include <iostream>
using namespace std;

int main() {
    int n, pos, value;
    cout << "How much elements are there? ";
    cin >> n;

    int arr[100];
    cout << "Enter the Element:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "At what position we have to insert (1 se " << n + 1 << " tak): ";
    cin >> pos;
    cout << "Which have to insert ";
    cin >> value;

    // Elements ko aage shift karo
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
    n++;

    cout << "Updated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}