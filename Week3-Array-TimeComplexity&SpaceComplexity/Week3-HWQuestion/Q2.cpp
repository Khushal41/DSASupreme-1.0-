 // Move all negative number to left  side of array
//Solving using 2 pointer approch
#include <bits/stdc++.h>
using namespace std;
void moveAllNegToLeft(int *a, int n)
{
    int low = 0, high = n - 1;
    while (low < high)
    {
        if (a[low] < 0)
            low++;
        else if (a[high] > 0)
            high--;
        else
            swap(a[low], a[high]);
    }
}
int main()
{
    int a[] = {1, 2, -3, 4, -5, 8, -88, 22, -44, 5};
    int n = sizeof(a) / sizeof(int);

    moveAllNegToLeft(a, n);

    //print condition
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << a[i] << " ";
    }

    return 0;
}

// TC :- o(n)
// SC :- o(q)