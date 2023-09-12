// Fancy pyramid

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number to print fancy pyramid : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << i + 1;
            if (j != i)
            // last char not print star
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << n - i;
            if (j != n - i - 1)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}