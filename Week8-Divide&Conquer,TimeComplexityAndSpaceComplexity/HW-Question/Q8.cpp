// Beafutiful Arrangement [Leetcode 526]
// Suppose you have n integers labeled 1 through n. A permutation of those n integers perm (1-indexed) is considered a beautiful arrangement if for every i (1 <= i <= n), either of the following is true:

// perm[i] is divisible by i.
// i is divisible by perm[i].
// Given an integer n, return the number of the beautiful arrangements that you can construct.

// Example 1:
// Input: n = 2
// Output: 2
// Explanation: 
// The first beautiful arrangement is [1,2]:
//     - perm[1] = 1 is divisible by i = 1
//     - perm[2] = 2 is divisible by i = 2
// The second beautiful arrangement is [2,1]:
//     - perm[1] = 2 is divisible by i = 1
//     - i = 2 is divisible by perm[2] = 1

// Example 2:
// Input: n = 1
// Output: 1

class Solution
{
public:
    void countArrangementHelper(vector<int> &v, int &n, int &ans, int currNum)
    {
        // Base case
        if (currNum == n + 1)
        {
            // for (int i = 1; i <= n; i++)
            // {
            //     cout << v[i] << " ";
            // }
            // cout << endl;
            ++ans;
            return;
        }
        for (int i = 1; i <= n; ++i)
        {
            if (v[i] == 0 && (currNum % i == 0 || i % currNum == 0))
            {
                v[i] = currNum;
                countArrangementHelper(v, n, ans, currNum + 1);
                v[i] = 0;
            }
        }
    }
    int countArrangement(int n)
    {
        vector<int> v(n + 1);
        int ans = 0;
        countArrangementHelper(v, n, ans, 1);
        return ans;
    }
};