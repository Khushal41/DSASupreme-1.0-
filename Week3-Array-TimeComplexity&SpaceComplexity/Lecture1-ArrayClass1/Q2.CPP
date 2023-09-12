// WAP to print array and its double

#include <iostream>
using namespace std;
int main()
{
    int arr[3];
    cout << "Enter array value : " << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    cout << "Print double array : " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] * 2 << " ";
    }

    cout << endl;
}