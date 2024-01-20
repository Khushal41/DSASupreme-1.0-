#include <iostream>
using namespace std;
int partition(int arr[], int s, int e)
{
    // Step 1:- choose pivot element
    int pivotIndex = s;
    int pivotElement = arr[s];

    // step 2:-  finding right place element and place there
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivotElement)
        {
            count++;  
        }
    }
    // Jab main loop se bahar aaya toh mere pass pivot ki position ka right index ready he
    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex; // pivot index update here

    // Step 3 :- left plase small element & Right me big element place karne he
    int i = s;
    int j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivotElement)
        {
            i++;
        }
        while (arr[j] > pivotElement)
        {
            j--;
        }
        // 2 case ho sakte he ->
        // 1 first case -> You found element to swap
        // 2 Second case -> No need to swap
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;
}
void quickSort(int arr[], int s, int e)
{
    // Base case
    if (s >= e)
        return;
    if (s == e)
        return;

    // Pattion Logic , return pivot
    int p = partition(arr, s, e);

    // Recursive call
    // pivot -> Left call
    quickSort(arr, s, p - 1);
    // pivot -> Right call
    quickSort(arr, p + 1, e);
}
int main()
{
    int arr[] = {8, 1, 2, 4, 20, 50, 40, 99, 55, 2};
    int n = 10;

    int s = 0;     // starting inndex
    int e = n - 1; // ending index
    quickSort(arr, s, e);

    // Answer print
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}