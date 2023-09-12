// number Pyramid

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number to priny number payramid : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int j;
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
        }
        j = j - 1;
        // Reverse counting
        for (; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}