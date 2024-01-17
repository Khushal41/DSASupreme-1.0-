// Binary search
#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> arr, int s, int e, int key)
{
    // Base case :-
    // Case 1:-key not found / Invalid array;
    if (s > e)
        return -1;
    int mid = (s + e) / 2;

    // 1 case solve
    //  Case 2:- key found
    if (arr[mid] == key)
        return mid;
    // Right search[Less than key]
    if (arr[mid] < key) // Right search [Less than key]
    {
        return binarySearch(arr, mid + 1, e, key);
    }
    else
    {
        // left search [Greater than key]
        return binarySearch(arr, s, mid - 1, key);
    }
}
int main()
{
    vector<int> v{10, 20, 30, 40, 9, 88, 44};
    int target = 40;

    int n = v.size();
    int s = 0;
    int e = n - 1;
    int ans = binarySearch(v, s, e, target);

    cout << "Answer is : " << ans;

    return 0;
}