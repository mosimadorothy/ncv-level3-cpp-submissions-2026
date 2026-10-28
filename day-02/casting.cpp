#include<iostream>
#include<iomanip>// formatting the output
using namespace std;
int main()
{



double avg1 = (70 + 85 + 90) / 3;     // 81
double avg2 = (70 + 85 + 90) / 3.0;   // 81.6667

int total = 245, tests = 3;
double avg3 = static_cast<double>(total) / tests;  // 81.6667
double avg4 = static_cast<double>(total / tests);  // 81

int whole = 9.99;
     cout << "Average 1: "<< avg1 << endl;
     cout << "Average 2: "<<fixed<<setprecision(2)<< avg2 << endl;
     cout << "Average 3: "<< avg3 << endl;
     cout << "Average 4: "<< avg4 << endl;
return 0;
}
