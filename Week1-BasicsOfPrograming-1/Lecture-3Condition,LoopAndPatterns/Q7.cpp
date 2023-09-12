// Hollow Rectangle

#include <iostream>
using namespace std;
int main()
{
    int rowCount, colCount;
    cout << "Enter value to print hollow rectangle : " << endl;
    cin >> rowCount;
    cin >> colCount;

    for (int row = 0; row < rowCount; row++)
    {
        if (row == 0 || row == rowCount - 1) {
            for (int col = 0; col < colCount; col++)
            {
                cout << " * ";
            }
        }
        else
        {
            cout << "* ";
            // _SPACE
            for (int row = 0; row < colCount - 2; row++)
            {
                cout << " ";
            }
            cout << " * ";
        }
        cout << endl;
    }
}

