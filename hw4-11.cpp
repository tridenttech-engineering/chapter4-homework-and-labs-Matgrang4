// Introductory11.cpp - displays ending balance
// Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double salePrice = 0.0;
    double taxRate = 0.0;
    double salesTax = 0.0;
    double cost = 0.0;

    // Input the sale price
    cout << "Enter the sale price: ";
    cin >> salePrice;

    // Input the sales tax rate
    cout << "Enter the sales tax rate: ";
    cin >> taxRate;

    // Calculate the sales tax
    salesTax = salePrice * taxRate;

    // Calculate the total cost
    cost = salePrice + salesTax;

    // Display the total cost
    cout << "Cost: $" << cost << endl;  

  return 0;
} // end of main function
