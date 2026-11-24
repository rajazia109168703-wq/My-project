#include <iostream>
using namespace std;

int main() {
    int n, key, pos = -1;
    cout << " How much Elements are? ";
    cin >> n;

    int arr[100];
    cout << "Enter the Elements";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << " Which Element have to serch?";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            pos = i + 1; // 1-based position
            break;
        }
    }

    if (pos != -1)
        cout << "Element position " << pos << "  is available ";
    else
        cout << "Element are not found in array";

    return 0;
}