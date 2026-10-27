
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
//Raphatelo MD Task 2
using namespace std;

int random(int maximum);

int random(int maximum) {
    return 1 + rand() % maximum;
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    // Guess a number between 1 and 20
    int secret = random(20);

   int guess = 0;
    int tries = 0;
    cout << "I am thinking of a number from 1 to 20." << endl;
    do {
        cout << "What are you guessing?" << endl;
        cin >> guess;
        tries += 1;
        if (guess < secret) {
            cout << "Very low" << endl;
        } else if (guess > secret) {
            cout << "Very high" << endl;
        } else {
            cout << "Correct!" << endl;
        }
    } while (guess != secret);
    cout << "You needed " << tries << " tries." << endl;
    return 0;
}
