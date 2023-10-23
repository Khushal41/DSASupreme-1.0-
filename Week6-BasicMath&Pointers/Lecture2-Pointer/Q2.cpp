#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    cout << sizeof(arr) << endl;

    int *p = arr;
    cout << sizeof(p) << endl;

    cout << sizeof(*p) << endl;

    return 0;
}