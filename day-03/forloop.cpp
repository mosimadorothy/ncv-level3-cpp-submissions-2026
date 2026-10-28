#include <iostream>
#include <iomanip>
//Raphatelo MD

using namespace std;

int main()
{
int num;
int sum = 0;
int average = 0;
 for(int i = 1; i <=5; i++)
 {
      cout << "Enter the number: ";
     cin>> num;
     if (num >=1 && num<=50)
     {
          sum = sum + num;

     }
     else
     {

          cout << "invalid number ";
     }

 }

 average = sum /5;

 cout << "The sum is: " <<sum <<endl;
 cout << "The average is: " << average<<endl;
 return 0;
}
