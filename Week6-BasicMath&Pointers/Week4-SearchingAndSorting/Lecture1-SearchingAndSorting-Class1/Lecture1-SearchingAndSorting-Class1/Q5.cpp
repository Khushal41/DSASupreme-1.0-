// smallest missing number
#include <bits/stdc++.h>
using namespace std;

// Function to find first positive missing number
int firstMissingPositive(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int ans = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == ans)
        {
            ans++;
        }
    }
    return ans;
}

// Driver code
int main()
{
    vector<int> arr = {0, 10, 3, 1, -10, -20};
    // Function call
    cout << firstMissingPositive(arr);
    return 0;
}
