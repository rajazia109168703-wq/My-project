#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many Elements u want to Enter ";
    cin >> n;

    int arr[100];
    cout << "Elements the Element:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements is equal to : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}