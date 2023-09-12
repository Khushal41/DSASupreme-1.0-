// WAP to find number in array

#include <iostream>
using namespace std;
// bool find(int arr[], int size, int key)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     cout << endl;
// }
// int main()
// {
//     int arr[5] = {1, 3, 5, 7, 8};
//     int size = 5;

//     cout << "Enter the key to find " << endl;
//     int key;
//     cin >> key;

//     if (find(arr, size, key))
//     {
//         cout << "Found " << endl;
//     }
//     else
//     {
//         cout << "not Found " << endl;
//     }

// cout << endl;
// }

int main()
{
    int arr[] = {1, 3, 5, 7, 4, 88, 66};
    int size = 7;
    int key = 88;
    bool flag = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            // cout << "Found" << endl;
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Not Present" << endl;
    }

    return 0;
}