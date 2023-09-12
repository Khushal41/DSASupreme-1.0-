// Binary Search

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int element = arr[mid];

        if (element == target)
        { // element found, then return index
            return mid;
        }

        if (target < element)
        {
            // search in left
            end = mid - 1;
        }
        else
        {
            // search in right
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    // element not found
    return -1;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 16};
    int size = 7;
    int target = 10;

    int indexOftarget = binarySearch(arr, size, target);

    if (indexOftarget == -1)
    {
        cout << "Target not found" << endl;
    }
    else
    {
        cout << "Target found at " << indexOftarget << " index " << endl;
    }

    return 0;
}