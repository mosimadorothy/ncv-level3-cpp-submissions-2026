
#include <iostream>
#include <conio.h>
using namespace std;

// Function prototypes
void getNumbers(int numberS[]);
int evenCounting(int numberS[]);
void displayOdd(int numbers[]);
void sortNumbers(int numbers[]);
void displaySorted(int numbers[]);

// Function to enter 5 numbers
void getNumbers(int numbers[])
{
    for (int x = 0; x < 5; x++)
    {
        cout << "Enter an number " << x + 1 << ": ";
        cin >> numbers[x];
    }
}

// Function to count even numbers
int evenCounting(int numbers[])
{
    int count = 0;

    for (int x = 0; x < 5; x++)
    {
        if (numbers[x] % 2 == 0)
        {
            count++;
        }
    }

    return count;
}

// Function to display odd numbers
void displayOdd(int numbers[])
{
    cout << "Odd numbers: ";

    for (int x = 0; x < 5; x++)
    {
        if (numbers[x] % 2 != 0)
        {
            cout << numbers[x] << " ";
        }
    }

    cout << endl;
}

// Function to sort numbers in ascending order
void sortNumbers(int numbers[])
{
    int temp;

    for (int x = 0; x < 4; x++)
    {
        for (int y = 0; y < 4 - x; y++)
        {
            if (numbers[y] > numbers[y + 1])
            {
                temp = numbers[y];
                numbers[y] = numbers[y + 1];
                numbers[y + 1] = temp;
            }
        }
    }
}

// Function to display sorted numbers
void displaySorted(int numbers[])
{
    cout << "Sorted numbers: ";

    for (int x = 0; x < 5; x++)
    {
        cout << numbers[x] << " ";
    }

    cout << endl;
}

// Main function
int main()
{
    // Declare array
    int numbers[5];

    // Call functions
    getNumbers(numbers);

    cout << "Number of even numbers: "
         << evenCounting(numbers) << endl;

    displayOdd(numbers);

    sortNumbers(numbers);

    displaySorted(numbers);

    _getch();
    return 0;
}
