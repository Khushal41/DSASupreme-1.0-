// WAP to print array 
#include <iostream>
using namespace std;
// void print(int arr[], int n, int i)
// {
//     // Base case
//     if (i >= n)
//     {
//         return;
//     }
//     // 1 case solve
//     cout << arr[i] << " ";
//     // Baki recursion sambhal lega
//     print(arr, n, i + 1);
// }

void print(int arr[], int n)
{
    // Base case
    if (n == 0)
    {
        return;
    }
    // 1 case solve
    cout << arr[0] << " ";
    // Baki recursion sambhal lega
    print(arr + 1, n - 1);
}

// void print(int arr[], int n)
// {
//     // Base case
//     if (n == 0)
//     {
//         return;
//     }
//     // Baki recursion sambhal lega
//     print(arr + 1, n - 1);
//     // 1 case solve
//     cout << arr[0] << " ";
// }
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int i = 0;
    print(arr, n);

    return 0;
}