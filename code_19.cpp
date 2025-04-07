#include <iostream>
using namespace std;

int main()
{
    bool isAdult, age;
    cout << "Enter your age: ";
    cin >> age;

    isAdult = (age >= 18) ? true : false;
    cout << isAdult << endl;

    // Largest of two numbers
    int a = 10;
    int b = 5;

    int Largest = (a >= b) ? a : b;
    cout << "Largest number is: " << Largest << endl;

    // odd even
    int c;
    cout << "Enter c: ";
    cin >> c;
    
    bool isEven = (c % 2 == 0) ? true : false;
    cout << "\n" << isEven << endl;

    return 0;
}