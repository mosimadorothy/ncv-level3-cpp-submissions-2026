#include<iostream>
using namespace std;
int main()
{

    int total_minutes, hours, minutes;

    cout << "Enter the time in minutes: ";
    cin >> total_minutes;

    hours = total_minutes / 60;
    minutes = total_minutes % 60;

      cout << hours<< " HRS "<< minutes << " MIN";

      return 0;

}
