
#include <iostream>
#include <iomanip>
//Raphatelo MD

using namespace std;

int main()
{
    // Declare and initialise two constants
    const double TRANSPORT_FEE = 250.00;
    const double VAT_RATE = 0.15;

    // Declare variables
    int numberOfLearners;
    double ticketPrice;
    double transportCost;
    double entranceCost;
    double subtotal;
    double vat;
    double totalCost;

    // Get input from user
    cout << "Enter number of learners: ";
    cin >> numberOfLearners;

    cout << "Enter entrance ticket price: R";
    cin >> ticketPrice;

    // Calculate transport cost
    transportCost = numberOfLearners * TRANSPORT_FEE;

    // Calculate entrance cost
    entranceCost = numberOfLearners * ticketPrice;

    // Calculate subtotal
    subtotal = transportCost + entranceCost;

    // Calculate VAT
    vat = subtotal * VAT_RATE;

    // Calculate total cost
    totalCost = subtotal + vat;

    // Display formatted results
    cout << fixed << setprecision(2);

    cout << "\n--- SCHOOL TRIP COST ---" << endl;
    cout << "Number of learners: " << numberOfLearners << endl;
    cout << "Transport cost: R" << transportCost << endl;
    cout << "Entrance cost: R" << entranceCost << endl;
    cout << "Subtotal: R" << subtotal << endl;
    cout << "VAT (15%): R" << vat << endl;
    cout << "Total cost: R" << totalCost << endl;

    return 0;
}
