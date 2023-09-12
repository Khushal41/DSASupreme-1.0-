#include <iostream>
using namespace std;
int main()
{
    int arr[4][3];
    int rows = 4;
    int col = 3;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Rowise : " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // // Declaration 2d array
    // int arr[3][3];
    // // Initilization 2d array
    // int brr[3][3] = {
    //     {1, 2, 3},
    //     {1, 2, 3},
    //     {1, 2, 3}};
    // // cout << brr[3][0] << endl;
    // cout << "Row-wise : " << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << brr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << "Column-wise : " << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << brr[j][i] << " ";
    //     }
    //     cout << endl;
    // }
}