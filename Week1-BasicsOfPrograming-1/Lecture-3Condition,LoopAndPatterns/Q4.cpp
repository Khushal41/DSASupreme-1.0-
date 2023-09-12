// Inverted Pyramid

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value to print inverted pyramid : " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}