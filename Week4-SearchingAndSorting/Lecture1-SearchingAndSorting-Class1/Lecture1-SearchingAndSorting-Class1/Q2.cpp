// WAP to find element found in array using binarySearch
#include <iostream>
#include <algorithm> //standard function binary search 
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
    vector<int> v{1, 2, 3, 4, 5, 6};
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;

    if (binary_search(arr, arr + size, 7))
    //pre define function
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not found. " << endl;
    }

    return 0;
}