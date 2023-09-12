// Solid Half Dimand

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter num to print : ";
    cin >> n;
    // Number print
    for (int i = 0; i < 2 * n - 1; i++)
    {
        int cond = 0;
        if (i < n)
        {
            // growing phase of dimand 
            cond = i;
        }
        else
        { 
            // shrinking phase of dimand 
            cond = n - (i % n) - 2;
        }
        for (int j = 0; j <= cond; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}