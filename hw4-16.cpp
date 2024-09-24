// Advanced16.cpp
// Created/revised by <Matt Granger> on <current date>

#include <iostream>
#include <iomanip> // for fixed and setprecision

using namespace std;

int main() {
    // Declare variables for sales
    double store1Sales = 0.0;
    double store2Sales = 0.0;
    double totalSales = 0.0;

    // Input sales for Store 1 and Store 2
    cout << "Enter sales for Store 1: ";
    cin >> store1Sales;

    cout << "Enter sales for Store 2: ";
    cin >> store2Sales;

    // Calculate total sales
    totalSales = store1Sales + store2Sales;

    // Output the total sales with fixed and setprecision for 2 decimal places
    cout << fixed << setprecision(2);
    cout << "Total Sales: $" << totalSales << endl;

    // Adjusted total with rounding correction (+0.5) to improve precision issues
    store1Sales = store1Sales + 0.5;
    store2Sales = store2Sales + 0.5;
    totalSales = store1Sales + store2Sales;

    // Display the adjusted total sales
    cout << "Adjusted Total Sales: $" << totalSales << endl;

    return 0;
}
} // end of main function
g++ -o hw4-16 hw4-16.cpp
./hw4-16

