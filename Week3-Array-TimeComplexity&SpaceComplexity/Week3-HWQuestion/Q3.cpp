// Find duplicate in array

#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &arr)
{
    // Using Sorting alogorithum 
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            return arr[i];
        }
    }
    
}
int main()
{
    vector<int> arr;
    arr = {1, 3, 4, 2, 2};
    cout << "The duplicate element is " << findDuplicate(arr) << endl;
}