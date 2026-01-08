#include <iostream>
using namespace std;

int main() {
    int n, num;
    int sum_even = 0, sum_odd = 0;

    cout << "Enter the number of integers: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter integer " << i+1 << ": ";
        cin >> num;

        if (num % 2 == 0)
            sum_even += num;
        else
            sum_odd += num;
    }

    cout << "Sum of even integers: " << sum_even << endl;
    cout << "Sum of odd integers: " << sum_odd << endl;

    return 0;
}
    