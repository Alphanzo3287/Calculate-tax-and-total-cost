// Alphanzo Moore

//CIS-5 Online

// Sep 28, 2023

// Assignment 6D: Calculate Tax and Total Cost

#include <iostream>
#include <string>
using namespace std;

// Function to calculate the subtotal
double calculateSubtotal(double price, int quantity) {
    return price * quantity;
}

// Function to calculate the tax amount
double calculateTax(double subtotal, double taxRate) {
    return subtotal * taxRate;
}

// Function to calculate the total cost
double calculateTotalCost(double subtotal, double tax, double discount) {
    return subtotal + tax - discount;
}

int main() {
    int itemCount;
    cout << "Enter the number of items in your cart: ";
    cin >> itemCount;

    double totalSubtotal = 0.0;
    double totalTax = 0.0;

    for (int i = 1; i <= itemCount; ++i) {
        string itemName;
        double itemPrice;
        int itemQuantity;

        cout << "Enter the name of item #" << i << ": ";
        cin.ignore(); // Clear the input buffer
        getline(cin, itemName);

        cout << "Enter the price of item #" << i << ": $";
        cin >> itemPrice;

        cout << "Enter the quantity of item #" << i << ": ";
        cin >> itemQuantity;

        double subtotal = calculateSubtotal(itemPrice, itemQuantity);
        totalSubtotal += subtotal;
        cout << "Subtotal for " << itemName << ": $" << subtotal << endl;

        // Calculate and accumulate tax
        const double taxRate = 0.08; // 8% tax rate (0.08 as a decimal)
        double tax = calculateTax(subtotal, taxRate);
        totalTax += tax;
        cout << "Tax for " << itemName << ": $" << tax << endl;
    }

    double discount;
    cout << "Enter any discount amount (if any): $";
    cin >> discount;

    double totalCost = calculateTotalCost(totalSubtotal, totalTax, discount);

    // Display the results
    cout << "\nTotal Subtotal: $" << totalSubtotal << endl;
    cout << "Total Tax: $" << totalTax << endl;
    cout << "Discount: $" << discount << endl;
    cout << "Total Cost: $" << totalCost << endl;

    return 0;
}
