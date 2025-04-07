#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 9 ;
    // True = 1 and False = 0
    cout << ((a > b) && (a < b)) << endl; // 0
    cout << ((a > b) || (a < b)) << endl; // 1
    cout << !(a > b) << endl; // 0
    return 0;
}