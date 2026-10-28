
#include <iostream>
#include <cmath>
#include <iomanip>
//Raphatelo MD
//Calculating the area of a circle
using namespace std;

int main()
{
    // Declare and initialise constants
    const double PI = 3.142;
    const double VAT_RATE = 0.15;

    // Declare variables
    double radius;
    double area;
    double pricePerSquareMetre;
    double cost;
    double  vat;
    double  totalCost;
    // Get input from user
    cout << "Enter the radius in metres: ";
    cin >> radius;

    cout << "Enter the price per square metre: R";
    cin >> pricePerSquareMetre;

    // Calculate area
    area = PI * pow(radius, 2);

    // Calculate cost and VAT
    cost = area * pricePerSquareMetre;
    vat = cost * VAT_RATE;
    totalCost = cost + vat;

    // Display the results
    cout << fixed << setprecision(2);

    cout << "\n--- SCHOOL GARDEN ---" << endl;
    cout << "Area: " << area << " square metres" << endl;
    cout << "Cost before VAT: R" << cost << endl;
    cout << "VAT (15%): R" << vat << endl;
    cout << "Total cost: R" << totalCost << endl;

    return 0;
}
