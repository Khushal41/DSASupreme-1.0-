// WAP to print Extreme print

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 44, 33, 12, 66, 40};
    int size = 6;
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        if (start == end)
        {
            cout << arr[start] << " ";
        }
        else
        {
            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }
        start++;
        end--;
    }
    return 0;
}