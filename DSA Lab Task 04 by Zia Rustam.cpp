#include <iostream>
using namespace std;

int main() {
    int n, pos;
    cout << "How much Elements are ? ";
    cin >> n;

    int arr[100];
    cout << " Enter the Element";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "At what position we have to Dleate (1 se " << n << " tak): ";
    cin >> pos;

    // Elements ko peeche shift karo
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    cout << "Updated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}