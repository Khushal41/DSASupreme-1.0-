// Hollow Inverted Half Pyramid

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value to print Hollow Inverted Half Pyramid : " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || j == n - i - 1)
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