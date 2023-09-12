// Fliped solid diamond

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number to print fliped solid diamond : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // Half pyramid
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        // Space
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << " ";
        }
        // Half pyramid
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        // Half pyramid
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        // space 
        for (int j = 0; j < 2 * n - 2 * i - 1; j++)
        {
            cout << " ";
        }
        // half pyramid 
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
