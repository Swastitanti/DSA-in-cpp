#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age >= 18){
        cout << "can vote" << endl;
    } else {
        cout << "cannot vote" << endl;
    }
    return 0;
}