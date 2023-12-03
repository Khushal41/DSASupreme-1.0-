#include <iostream>
using namespace std;

int main()
{

    int a = 5;
    // creating a reference variable   
    int &b = a;

    // Same memory location different name 
    cout << a << endl;
    cout << b << endl;


    a++;
    cout << a << endl;
    cout << b << endl;

    b++;
    cout << a << endl;
    cout << b << endl;

    return 0;
}