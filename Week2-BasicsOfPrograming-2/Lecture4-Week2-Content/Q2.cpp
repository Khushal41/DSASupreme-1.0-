// Print digit of a number
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    // int n = 5493;
    // cout << "Using for loop : " << endl;
    // while (n != 0)
    // {
    //     int rem = n % 10;
    //     cout << rem << " ";
    //     n = n / 10;
    // }

    // // OR

    // for (; n != 0; n = n / 10)
    // {
    //     int rem = n % 10;
    //     cout << rem << " ";
    // }

    // OR
    int digit[] = {1, 4, 6, 2};
    int ans = 0;
    for (int i = 0; i < 4; i++)
    {
        ans = ans * 10 + digit[i];
    }
    cout << ans << endl;

    cout << endl;
    return 0;
}