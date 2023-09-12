// Solid Dimand

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number to print solid dimand : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // spce print
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // star print
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        // star print
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // space print
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}