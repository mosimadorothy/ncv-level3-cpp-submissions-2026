#include <iostream>
#include <iomanip>
//Raphatelo MD

using namespace std;

int main()
{
int num;
int sum = 0;
int average = 0;
int count;
 for(int count = 1; count <=5; count++)
 {
      cout << "Enter the number "<<count<<" : ";
     cin>> num;
     if (num >=1 && num<=50)
     {
          sum = sum + num;

     }
     else
     {

          cout << "invalid number ";
          count--;
     }

 }

 average = sum /5;

 cout << "The sum is: " <<sum <<endl;
 cout << "The average is: " << average<<endl;
 return 0;
}
