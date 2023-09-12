// WAP to find linear search
#include <iostream>
using namespace std;
bool findKey(int arr[][3], int row, int col, int key)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
        }
        return false;
    }
}
int main()
{
    int arr[3][3];
    int row = 3;
    int col = 3;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // Rowise sum
            cin >> arr[i][j];
            // column wise
            // cin >> arr[j][i];
        }
    }
    cout << "Row-wise : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int key = 2;
    if (findKey(arr, 3, 3, key))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}