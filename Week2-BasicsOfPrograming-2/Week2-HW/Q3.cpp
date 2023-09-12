// Numeric palindrome equilateral pyramid

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number to print : ";
    cin >> n;

    int k = n;
    for (int i = 0; i < n; i++)
    {
        int c = 1;
        for (int j = 0; j < k; j++)
        {
            if (j < n - i - 1)
            {
                cout << " ";
            }
            else
            {
                cout << c;
                c++;
            }
        }
        cout << endl;
    }
}