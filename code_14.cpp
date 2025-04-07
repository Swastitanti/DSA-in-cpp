#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a: "; // 4
    cin >> a;
    cout << "Enter b: "; // 5
    cin >> b;

    if (a >= b) {
        cout << "a is largest" << endl;
    } else {
        cout << "b is largest" << endl; // b is largest
    }
    return 0;
}