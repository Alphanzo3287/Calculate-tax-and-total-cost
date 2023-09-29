# Instructions  
Certainly! Here's a beginner-level C++ programming problem that involves creating three functions with multiple parameters, along with its solution:

**Problem: Calculate Tax and Total Cost**

Write a C++ program that calculates the total cost of items in a shopping cart, including tax. To solve this problem, create three functions:

1. Create a function called `calculateSubtotal` that takes two parameters:
   - `price` (double): the price of an individual item.
   - `quantity` (int): the quantity of that item.

   The function should calculate and return the subtotal for the items (price * quantity).

2. Create another function called `calculateTax` that takes two parameters:
   - `subtotal` (double): the subtotal of the items.
   - `taxRate` (double): the tax rate as a decimal (e.g., 0.08 for an 8% tax rate).

   The function should calculate and return the tax amount (subtotal * taxRate).

3. Create a third function called `calculateTotalCost` that takes three parameters:
   - `subtotal` (double): the subtotal of the items.
   - `tax` (double): the tax amount.
   - `discount` (double): a discount amount (if any).

   The function should calculate and return the total cost of the items, including tax and discount (subtotal + tax - discount).

In the `main` function:

- Ask the user to enter the following information for each item:
  - Item name (string).
  - Item price (double).
  - Item quantity (int).
- Ask the user to enter the tax rate as a decimal (e.g., 0.08 for an 8% tax rate).
- Ask the user to enter a discount amount (if any).
- Use the `calculateSubtotal` function to calculate the subtotal for each item.
- Use the `calculateTax` function to calculate the tax amount.
- Use the `calculateTotalCost` function to calculate the total cost of all items, including tax and discount.
- Display the subtotal, tax amount, discount (if any), and the total cost on the screen.

Here's a sample of how the program should work:

```
Enter the number of items in the shopping cart: 2

Item 1:
Name: T-shirt
Price: 12.99
Quantity: 3

Item 2:
Name: Jeans
Price: 29.95
Quantity: 2

Enter the tax rate (as a decimal, e.g., 0.08 for 8% tax): 0.085
Enter the discount amount: 5.0

Subtotal: $99.87
Tax: $8.49
Discount: $5.00
Total Cost: $103.36
```
