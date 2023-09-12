// Solid Rectangle

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value to print solid rectangle : " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}