#include <iostream>
using namespace std;
int main()
{

    int arr[4] = {12, 44, 66, 18};

    // // Part 1:-
    // cout << arr << endl;     // Address Base
    // cout << arr[0] << endl;  // 12
    // cout << &arr << endl;    // Address Base
    // cout << &arr[0] << endl; // Address Base

    // int *p = arr;
    // cout << p << endl;
    // cout << &p << endl;

    // Part 2 :-
    // cout << *arr << endl;
    // cout << arr[0] << endl;
    // cout << *arr + 1 << endl;
    // cout << *(arr) + 1 << endl;
    // cout << *(arr) + 1 << endl;
    // cout << *(arr + 1) << endl; // Next index value
    // cout << arr[1] << endl;
    // cout << *(arr + 2) << endl;
    // // Next index value
    // cout << arr[2] << endl;
    // cout << *(arr + 3) << endl; // 18
    // cout << arr[3] << endl;

    // Part 3 :-
    // int i = 0;
    // These 3 expression are same so the answer in same
    // cout << arr[i] << endl;     // same
    // cout << i[arr] << endl;     // same
    // cout << *(arr + i) << endl; // same

    // Part 4 :-
    // changing base address not possible not possible using array
    arr = arr + 2; // error
    // changing base address possible  using pointer
    int *p = arr;
    p = p + 2;

    return 0;
}