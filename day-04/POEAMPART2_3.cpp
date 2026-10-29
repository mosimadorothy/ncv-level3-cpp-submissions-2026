#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstdlib>
//#include <iomanip>
//Raphatelo MD

using namespace std;

//function prototypes

void getNumbers(int &num1, int &num2);
int calcSum(int num1, int num2);
int calcDifference(int num1, int num2);
int calcProduct(int num1, int num2);
float calcQuotient(float num1, float num2);
//get numbers function
void getNumbers(int &num1, int &num2)
{
    cout << "Enter 2 numbers : " << endl;
    cin>>num1>>num2;
}

//calculating sum function
int calcSum(int num1, int num2)
{
    return num1 + num2;
}
//Calculating the difference
int calcDifference(int num1, int num2)
{
    return num1 - num2;
}
//Calculating the product
int calcProduct(int num1, int num2)
{
    return num1 * num2;
}
//Calculating the quotient
float calcQuotient(float num1, float num2)
{
    return (num1)/(num2);
}
int  main()
{
    int num1=0 ;
    int num2= 0;

    char operators;
    getNumbers(num1,num2);
    cout << num1 << " + "<<num2<<" = "<< calcSum(num1,num2)<< endl;
    cout << num1 << " - "<<num2<<" = "<< calcDifference(num1,num2)<< endl;
    cout << num1 << " * "<<num2<<" = "<< calcProduct(num1,num2)<< endl;
    cout << num1 << " / "<<num2<<" = "<< calcQuotient(num1,num2)<< endl;

    //generate random numbers
    srand(time(0));
    num1 = rand() % 50 + 1;
    num2 = rand() % 50 + 1;

    //Display random numbers

    cout << "First number: "<<num1<<endl;
    cout << "Second number: "<<num2<<endl;
    //Get mathematical operator

    cout << "Enter an operator(+,-,*,/): ";
    cin >> operators;
    //switch statement
    switch(operators)
    {
        case '+':
        cout << num1 << " + "<<num2<<" = "<< calcSum(num1,num2)<< endl;
        break;
        case '-':
        cout << num1 << " - "<<num2<<" = "<< calcDifference(num1,num2)<< endl;
        break;
        case '*':
        cout << num1 << " * "<<num2<<" = "<< calcProduct(num1,num2)<< endl;
        break;
        case '/':
        cout << num1 << " / "<<num2<<" = "<< calcQuotient(num1,num2)<< endl;
         break;
         default:
         cout << " invalid math operator "<< endl;
         break;
    }

    //call
    //





    _getch();
    return 0;
}
