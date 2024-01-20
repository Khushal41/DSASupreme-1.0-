// Merge sort
#include <iostream>
using namespace std;
void merge(int *arr, int s, int e)
{
    // Creating 2 sorted array
    int mid = (s + e) / 2;

    // Length of array 1
    int len1 = mid - s + 1;

    // Length of array 2
    int len2 = e - mid;

    // Creating left right 2 array
    // Create new 2 block of array[address] *left & *right
    int *left = new int[len1];
    int *right = new int[len2];

    // Copy value
    int k = s; // starting index s index
    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k];
        k++;
    }

    k = mid + 1; // starting at mid+1 index
    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[k];
        k++;
    }

    // Merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    // Comparison Logic
    while (leftIndex < len1 && rightIndex < len2)
    {
        if (left[leftIndex] < right[rightIndex])
        {
            arr[mainArrayIndex++] = left[leftIndex++];
        }
        else
        {
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }
    // if 1 array is end Array end logic
    // for left array
    while (leftIndex < len1)
    {
        arr[mainArrayIndex++] = left[leftIndex++];
    }
    // for Right array
    while (rightIndex < len2)
    {
        arr[mainArrayIndex++] = right[rightIndex++];
    }
}
// Pointer to array -> Pass By reference  in array
void mergeSort(int *arr, int s, int e)
{
    // arr-> Pointer to array pass
    // Base case
    // if (s == e)
    //     return;
    if (s >= e)
        return;

    int mid = (s + e) / 2;
    // left part sort
    mergeSort(arr, s, mid);
    // Right part sort
    mergeSort(arr, mid + 1, e);
    // Merge 2 sorted Array
    merge(arr, s, e);
}
int main()
{
    int arr[] = {4, 12, 5, 13, 2};
    int n = 5;

    int s = 0;
    int e = n - 1;
    // Creating / calling mergeSort function
    mergeSort(arr, s, e);

    // Printing the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}