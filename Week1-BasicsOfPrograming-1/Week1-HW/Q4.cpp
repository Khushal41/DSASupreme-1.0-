// Hollow Inverted full Pyramid

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value to print Hollow Inverted full Pyramid : " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int k = 0;
        for (int j = 0; j < ((2 * n) - 1); j++)
        {
            if (j < n - i - 1)
            {
                cout << " ";
            }
            else if (k < 2 * i + 1)
            {
                if (k == 0 || k == 2 * i || i == n - 1)
                    cout << "*";
                else
                    cout << " ";
                k++;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}