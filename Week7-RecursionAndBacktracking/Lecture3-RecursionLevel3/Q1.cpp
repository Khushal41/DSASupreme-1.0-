#include <iostream>
#include <vector>
using namespace std;
bool cheakSorted(vector<int> &arr, int &n, int i)
{
    // base case
    if (i == n - 1)
    {
        return true;
    }
    // 1 case solve
    if (arr[i + 1] < arr[i])
        return false;
    // Baki recursion sambhal lega
    return cheakSorted(arr, n, i + 1);
}
int main() 
{
    vector<int> v{10, 20, 30, 40, 9};
    int n = v.size();
    int i = 0;
    bool isSorted = cheakSorted(v, n, i);

    if (isSorted)
    {
        cout << "Array is sorted " << endl;
    }
    else
    {
        cout << "Array is not sorted " << endl;
    }
    return 0;
}