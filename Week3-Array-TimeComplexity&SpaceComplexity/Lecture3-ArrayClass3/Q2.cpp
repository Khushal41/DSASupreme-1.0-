// WAP to find row sum
#include <iostream>
using namespace std;
void printRowWiseSum(int arr[][3], int row, int col)
{
    cout << "Print row-wise sum : " << endl;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
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

    printRowWiseSum(arr, row, col);
}