// Alphabet Palindrome Pyramid

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number to priny alphabet palindrome payramid : ";
    cin >> n;

    for (int row = 0; row < n; row = row + 1)
    {
        int col;
        for (col = 0; col < row + 1; col = col + 1)
        {
            int ans = col + 1;
            char ch = ans + 'A' - 1;
            cout << ch;
        }

        // reverse counting printing
        for (int col = row; col >= 1; col = col - 1)
        {
            int ans = col;
            char ch = ans + 'A' - 1;
            cout << ch;
        }
        cout << endl;
    }
}