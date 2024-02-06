#include <iostream>
using namespace std;
int x = 2; // Global variable

void fun()
{
    int x = 90;
    cout << x << endl;
    cout << ::x << endl;
}
int main()
{
    x = 9;     // Global x
    int x = 7; // Local main() function
    cout << x << endl;
    cout << ::x << endl; // Accessing Global with "::"

    {
        int x = 50;
        cout << x << endl;   // most local will print
        cout << ::x << endl; // Global will print
    }

    fun();
    return 0;
}