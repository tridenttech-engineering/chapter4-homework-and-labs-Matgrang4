// Lab4-4.cpp - displays the volume of a cylinder
// Created/revised by Matt Granger on 9/17/24

#include <iostream> // Needed to use cin and cout
#include <cmath>    // Needed to use pow function for squaring

using namespace std;

int main() {
    // Declare variables for radius, height, and volume
    double radius = 0.0;
    double height = 0.0;
    double volume = 0.0;

    // Define pi as 3.14
    const double PI = 3.14;

    // Prompt the user to enter the radius and height of the cylinder
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    cout << "Enter the height of the cylinder: ";
    cin >> height;

    // Calculate the volume of the cylinder using the formula π * r^2 * h
    volume = PI * pow(radius, 2) * height;

    // Display the calculated volume
    cout << "The volume of the cylinder is: " << volume << endl;

    return 0; // End of the program
}
} // end of main function
make clean
make lab4-4
./lab4-4
make test_lab4-4
./test_files/test_lab4-4

