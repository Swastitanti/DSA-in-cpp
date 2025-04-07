#include <iostream>
using namespace std;

int main()
{
    float marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90) {
        cout << "A" << endl;
    } else if (marks >= 80) {
        cout << "B" << endl;
    } else {
        cout << "C" << endl;
    }
    return 0;
}