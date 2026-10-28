#include <iostream>
#include <iomanip>
//Raphatelo MD

using namespace std;

int main()
{
    char gendercode;
    string description;

        cout << "Enter the gender code: ";
        cin >> gendercode;


       switch (gendercode)
{
        case 'M':
        case 'm':
        description = "Male";
        break;
        case 'F':
        case 'f':
        description = "Female";
        break;

        default:
       description = "Invalid gender";
}
cout << description;
                return 0;

}
