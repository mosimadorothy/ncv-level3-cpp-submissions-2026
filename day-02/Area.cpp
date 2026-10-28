#include<iostream>
using namespace std;
int main()
{
    float length, breadth, area, perimeter;
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the breadth: ";
    cin >> breadth;
    //calculate the area
    area = length * breadth;
    perimeter = 2 *(length + breadth);
    cout << "Area: "<< area << endl;
     cout << "Perimeter: "<< perimeter << endl;

     return 0;



}
