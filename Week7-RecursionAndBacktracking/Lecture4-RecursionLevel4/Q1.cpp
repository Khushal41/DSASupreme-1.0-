// WAP to find coin chani problem
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int solve(vector<int> &arr, int target)
{
    // base case
    if (target == 0)
    {
        return 0;
    }
    if (target < 0) // for negative num
    {
        return INT_MAX; // invalid ex.-1 
    }

    // let's solve 1 case
    int mini = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        int ans = solve(arr, target - arr[i]); // t(arr,target - current element)
        if (ans != INT_MAX)

            // Range ke baharnikal jayga
            mini = min(mini, ans + 1);
    }

    return mini;
}

int main()
{
    vector<int> arr{1, 2};
    int target = 5;

    int ans = solve(arr, target);
    cout << "Answer is: " << ans << endl;
    return 0;
}