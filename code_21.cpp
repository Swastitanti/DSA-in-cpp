#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter operator: ";
    cin >> op;

    switch (op) {
        case '+' : cout << "a + b = " << (a + b) << endl;
                   break;
        case '-' : cout << "a - b = " << (a - b) << endl;
                   break;
        case '*' : cout << "a * b = " << (a * b) << endl;
                   break;
        case '/' : cout << "a / b = " << (a/b) << endl;
                   break;
        default : cout << "Invalid Operator" <<  endl;
    }
    return 0;
}