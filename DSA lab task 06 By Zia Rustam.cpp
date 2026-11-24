#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << " How much Elwments are avilable? (Pleaz Enter in sorted form?) ";
    cin >> n;

    int arr[100];
    cout << "Enter the sorted Elements :\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << " Which Element have to Search ";
    cin >> key;

    int low = 0, high = n - 1, pos = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            pos = mid + 1;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (pos != -1)
        cout << "Element position " << pos << " is Available";
    else
        cout << "Element are not available in array";

    return 0;
}