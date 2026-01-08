#include <iostream>
#include <string>
#include <map>

using namespace std;
map<string, map<string, double>> items = {
    {"Electronics", {{"Laptop", 1000}, {"Smartphone", 700}, {"Headphones", 150}}},
    {"Clothing", {{"Jacket", 120}, {"T-shirt", 40}, {"Jeans", 60}}},
    {"Groceries", {{"Milk", 2}, {"Bread", 3}, {"Eggs", 5}}}
};

double applyDiscount(double total) {
    if (total < 100) return total;
    else if (total >= 100 && total <= 500) return total * 0.9;
    else return total * 0.8;
}

int main() {
    string category, item;
    int quantity;

    cout << "Select a category (Electronics, Clothing, Groceries): ";
    cin >>category;
    cout << "Available items in " << category << ":\n";
    for (auto& i : items[category]) {
        cout << i.first << " ($" << i.second << ")\n";
    }
    cout << "Enter item name: ";
    cin >> item;

    cout << "Enter quantity: ";
    cin >> quantity;
    double total = items[category][item] * quantity;
    double finalPrice = applyDiscount(total);

    cout << "\n--- Invoice ---" << endl;
    cout << "Item: " << item << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Total: $" << total << endl;
    cout << "Discounted Price: $" << finalPrice << endl;

    return 0;
}
