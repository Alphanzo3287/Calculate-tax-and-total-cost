# Lesson plan
#include <iostream>
#include <string>
using namespace std;

// Function to calculate the subtotal of items
double calculateSubtotal(double price, int quantity) {
    return price * quantity;
}

// Function to calculate the tax amount
double calculateTax(double subtotal, double taxRate) {
    return subtotal * taxRate;
}

// Function to calculate the total cost, including tax and discount
double calculateTotalCost(double subtotal, double tax, double discount) {
    return subtotal + tax - discount;
}

int main() {
    int numItems;
    cout << "Enter the number of items in the shopping cart: ";
    cin >> numItems;

    double subtotal = 0.0, taxRate, discount;
    string itemName;
    double itemPrice;
    int itemQuantity;

    for (int i = 1; i <= numItems; ++i) {
        cout << "\nItem " << i << ":" << endl;
        cout << "Name: ";
        getline(cin, itemName);
        cout << "Price: ";
        cin >> itemPrice;
        cout << "Quantity: ";
        cin >> itemQuantity;

        double itemSubtotal = calculateSubtotal(itemPrice, itemQuantity);
        subtotal += itemSubtotal;
    }

    cout << "\nEnter the tax rate (as a decimal, e.g., 0.08 for 8% tax): ";
    cin >> taxRate;
    cout << "Enter the discount amount: ";
    cin >> discount;

    double tax = calculateTax(subtotal, taxRate);
    double totalCost = calculateTotalCost(subtotal, tax, discount);

    cout << "\nSubtotal: $" << subtotal << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Discount: $" << discount << endl;
    cout << "Total Cost: $" << totalCost << endl;

    return 0;
}

  