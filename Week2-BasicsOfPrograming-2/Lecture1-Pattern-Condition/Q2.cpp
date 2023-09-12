// Inverted Full Pyramid

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number to print inverted full pyramid : ";
    cin >> n;

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