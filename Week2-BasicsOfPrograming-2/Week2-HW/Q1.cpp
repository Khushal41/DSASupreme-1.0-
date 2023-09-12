// Number Hollow Half Pyramid
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter num to print hollow half pyramid : ";
    cin >> n;
    // Number print
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
            if (j == 0 || j == i || i == n - 1)
            {
                cout << j + 1;
            }
            else
            {
                cout << " ";
            }
        cout << endl;
    }
}