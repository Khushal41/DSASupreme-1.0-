// WAP to find maximum num in array

#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int arr[] = {1, 4, 33, 222, 66};
    int size = 5;
    // int maxi = INT_MIN;
    int mini = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    cout << "Maximum number : " << mini << endl;

    return 0;
}