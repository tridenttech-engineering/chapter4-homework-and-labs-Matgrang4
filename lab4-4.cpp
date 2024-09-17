//Lab4-4.cpp - displays the volume of a cylinder
//Created/revised by <Matt Granger> on <9/17/24>

#include <iostream>
using namespace std;

int main() {
// Declare variables
    double height = 0.0;
    double radius = 0.0;
    double volume = 0.0;
    const double PI = 3.14; // Constant value of pi

// Input the radius of the cylinder
    cout << "Radius: ";
    cin >> radius;

// Input the height of the cylinder
    cout << "Height: ";
    cin >> height;

// Calculate the volume of the cylinder using the formula π * r^2 * h
    volume = PI * radius * radius * height;

// Display the volume of the cylinder
    cout << "Volume: " << volume << " cubic units" << endl;

    return 0;
} // end of main function
Radius: 3
Height: 5
Volume: 141.3 cubic units
