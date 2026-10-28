#include <iostream>
#include <iomanip>
//Raphatelo MD

using namespace std;

int main()
{
    char gendercode;

        cout << "Enter the gender code: ";
        cin >> gendercode;

        if(gendercode =='m' || gendercode =='M')
        {

            cout << "male" << endl;

        }
      else
      {
         if(gendercode =='f' || gendercode =='F')

         {
             cout << "female" << endl;
         }
        else{
                cout << "unknown gender" << endl;

        }
      }




                return 0;

}
