#include <iostream>
using namespace std;

int main()
{
    int n;
    int digSum = 0;
    cout << "Enter your n: ";
    cin >> n;

    while (n > 0) {
        int lastDig = n % 10;
        digSum += lastDig;
        n = n / 10;
    }

    cout << "Sum = " << digSum << endl;
    return 0;
}