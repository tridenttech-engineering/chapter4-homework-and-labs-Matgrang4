//Lab4-2.cpp - displays a salesperson's commission
//Philip Regalbuto
#include <iostream>
using namespace std;
int main()
{
// Declare variables
double salesAmount, commission;
double commissionRate = 0.10; // 10% commission

// Input the sales amount
cout << "Enter sales amount: ";
cin >> salesAmount;

// Calculate the commission
commission = salesAmount * commissionRate;

// Display the sales amount and commission
cout << "Sales amount: $" << salesAmount << endl;
cout << "Commission: $" << commission << endl;

  return 0;
} //end of main function
/*
Sales amount: 1328.50
Commission: $132.85
Press any key to continue . . .
*/
