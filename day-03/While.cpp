#include <iostream>
#include <iomanip>
//Raphatelo MD

using namespace std;

int main()
{
int num;
int sum = 0;
int average = 0;
int count = 0 ;

while( count <5)
 {
      cout << "Enter the number "<<count+1<<" : ";
     cin>> num;
     if (num >=1 && num<=50)
     {
          sum = sum + num;
        count++;
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
