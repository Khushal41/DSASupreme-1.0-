// This program declares an integer array of size 5 and initializes it with values 1, 2, 3, 4, and5. Then, it attempts to print the elements of the array using a loop.However, there's an error in the loop that you need to debug. Can you find it and fix it?
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int8_t sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += i;
    }
    cout << (int)sum << endl;
    return 0;
}