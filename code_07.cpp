#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    int avg = (a + b + c)/3;
    cout << "Avg. of numbers: " << avg << endl;
    return 0;
}