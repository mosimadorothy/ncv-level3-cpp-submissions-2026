#include <iostream>
#include <conio.h>
//#include <iomanip>
//Raphatelo MD

using namespace std;

//prototypes

void getNumbers(int &num1, int &num2);
void calcSum(int num1, int num2);
void calcDifference(int num1, int num2);
void calcProduct(int num1, int num2);
void calcQuotient(float num1, float num2);
//get numbers function
void getNumbers(int &num1, int &num2)
{
    cout << "Enter 2 numbers : " << endl;
    cin>>num1>>num2;
}

//calculating sum function
void calcSum(int num1, int num2)
{
   cout << num1 << " + "<<num2<<" = "<<(num1 + num2)<< endl;
}
//Calculating the difference
void calcDifference(int num1, int num2)
{
  cout << num1 << " - "<<num2<<" = "<< (num1 - num2)<< endl;
}
//Calculating the product
void calcProduct(int num1, int num2)
{
    cout << num1 << " * "<<num2<<" = "<< (num1 * num2)<< endl;
}
//Calculating the quotient
void calcQuotient(float num1, float num2)
{
    cout << num1 << " / "<<num2<<" = "<< (num1/num2)<< endl;
}
int  main()
{
    int num1=0 ;
    int num2= 0;
    //call
    getNumbers(num1,num2);
    calcSum(num1,num2);
    calcDifference(num1,num2);
    calcProduct(num1,num2);
   calcQuotient(num1,num2);

    _getch();
    return 0;
}
