// Made with Blocks to C++
#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "";
    string gender = "";
    cout << "What is your name?" << endl;
    getline(cin >> ws, name);
    cout << "Are you Male or Female?" << endl;
    getline(cin >> ws, gender);
    if (gender == "M" || gender == "m" ) {
        cout <<"Hello, " << name << " you are a great gentlemen" <<endl;
    } if (gender == "F" || gender == "f") {
        cout << "Hello, " <<name << " you are a great lady" <<endl;
    }

    //cout << "Hello, " << name << endl;
    return 0;
}
