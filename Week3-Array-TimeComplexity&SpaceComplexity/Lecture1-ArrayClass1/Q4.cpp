// Count 0's ans 1's in array
#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1, 1, 1, 1, 0, 0, 0, 1, 0};
    int size = 9;

    int numZero = 0;
    int numOne = 1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            numZero++;  
        }
        if (arr[i] == 1)
        {
            numOne++;
        }
    }

    cout << "Number of zero :" << numZero << endl;
    cout << "Number of one :" << numOne << endl;
    return 0;
}