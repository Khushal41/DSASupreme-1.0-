// Numerical Full Pyramid

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number to print numerical full pyramid : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // number
        for (int j = 0; j < i + 1; j++)
        {
            cout << i + j + 1;
        }
        // reverse counting
        int start = 2 * i;
        for (int j = 0; j < i; j++)
        {
            cout << start;
            start = start - 1;
        }
        cout << endl;
    }
}