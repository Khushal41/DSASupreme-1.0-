#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *p = &a; // Pointer to integer data
    int **q = &p; // Pointer to pointer data

    cout << &a << endl;
    cout << a << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;
    cout << q << endl;
    cout << &q << endl;
    cout << *q << endl;
    cout << **q << endl;

    return 0;
}