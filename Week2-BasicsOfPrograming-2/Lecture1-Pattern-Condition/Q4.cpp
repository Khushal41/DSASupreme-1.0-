// Hollow Dimand

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number to print hollow diamand : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * n + 1; j++)
        {
            // if first character or last character
            if (j == 0 || j == 2 * i)
            {
                // first character or last star
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * n - 2 * i - 1; j++)
        {
            //  first or last character
            if (j == 0 || j == 2 * n - 2 * i - 2)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}