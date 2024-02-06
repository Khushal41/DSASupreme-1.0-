#include <iostream>
using namespace std;
int main()
{
    // const int x = 9; // x is constant
    // x = 19; // Initializatin done but we can not cahange value
    // cout << x << endl;

    // Const with pointer :-
    // const int *a = new int[2]; // const data,  Non const pointer
    // int const *a = new int[2]; // SAME as line number 10
    // cout << *a << endl;
    // // a = 9; // cant't change pointer value But
    // // cout << *a << endl;
    // int b = 20;
    // a = &b; // pointer itself can be reassigned
    // cout << *a << endl;

    // Pointer = constant or Non constant data :-
    // int *const a = new int[2];
    // cout << *a << endl;
    // *a = 20;
    // cout << *a << endl;
    // int b = 50;
    // a = &b; // because pointer not const

    // CONST pointer , CONST data
    // const int *const a = new int[10];
    // cout << a << endl;
    // *a = 50;
    // int b = 100;
    // a = &b;

    return 0;
}