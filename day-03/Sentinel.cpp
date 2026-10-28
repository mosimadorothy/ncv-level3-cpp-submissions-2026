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
    cout << "Enter the number "<<count+1<<" : ";
     cin>> num;

while( num !=-1)
 {


          sum = sum + num;
        count++;
        num++;

cout << "Enter the number "<<count+1<<" : ";
     cin>> num;


     }



 average = sum /5;

 cout << "The sum is: " <<sum <<endl;
 cout << "The average is: " << average<<endl;
 return 0;
}
