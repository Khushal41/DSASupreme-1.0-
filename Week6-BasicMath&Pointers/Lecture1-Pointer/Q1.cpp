#include <iostream>
using namespace std;
int main()
{
    // Part 1 :-
    // int a = 5;
    // int b = 5;

    // cout << a << endl; // 5 print
    // cout << &a << endl; // address of a will print [Hexa-decimal value]

    // cout << b << endl; // 5 print
    // cout << &b << endl; // address of b will print [Hexa-decimal value]

    // Part 2 :-
    // int a = 5;
    // // Pointer create
    // int *ptr = &a;
    // // Access value ptr is pointing to
    // cout << "Address of a is : " << *ptr << endl;
    // cout << "Value stored at ptr is : " << ptr << endl;
    // cout << "Value ptr is pointing to is : " << *ptr << endl;
    // cout << &ptr << endl; // ptr wale box ka address dega ye

    // Part 3 :-
    // int a = 5;
    // int *p = &a;
    // cout << sizeof(p) << endl;

    // char ch = 'b';
    // char *c = &ch;
    // cout << sizeof(c) << endl;

    // double dtr = 5.03;
    // double *d = &dtr;
    // cout << sizeof(d) << endl;

    // BAD PRACTICE
    //  int* ptr;

    // cout << *ptr << endl;

    // NULL POINTER
    //  int* ptr = 0;

    // cout << *ptr << endl;

    // int a = 5;

    // int* ptr = &a;

    // //copy pointer
    // int* dusraPtr = ptr;

    // cout << *ptr << endl;
    // cout << *dusraPtr << endl;

    // Part 4 :- 
    int a = 10;
    int *p = &a;
    int *q = p;
    int *r = q;

    cout << a << endl;                   // 10
    cout << &a << endl;                  // address of a
    cout << p << endl;                   // address of a
    cout << &p << endl;                  // address of p
    cout << *p << endl;                  // 10
    cout << q << endl;                   // address of a
    cout << &q << endl;                  // address of q
    cout << *q << endl;                  // 10
    cout << r << endl;                   // address of a
    cout << &r << endl;                  // address of r
    cout << *r << endl;                  // 10
    cout << (*p + *q + *r) << endl;      // 30
    cout << (*p) * 2 + (*r) * 3 << endl; // 50
    cout << (*p / 2) - (*q) / 2 << endl; // 0
}
