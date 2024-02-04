// Combinational Sum[Leetcode-39]
// Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

// The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the 
// frequency
//  of at least one of the chosen numbers is different.

// The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.
// Example 1:

// Input: candidates = [2,3,6,7], target = 7
// Output: [[2,2,3],[7]]
// Explanation:
// 2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
// 7 is a candidate, and 7 = 7.
// These are the only two combinations.

class Solution
{
public:
    void combinationSum_helper(vector<int> &candidates, int target,
                               vector<int> &v, vector<vector<int>> &ans,
                               int index)
    {
        // Base case
        if (target == 0)
        {
            ans.push_back(v);
            return;
        }
        if (target < 0)
        {
            return;
        }
        for (int i = index; i < candidates.size(); i++)
        {
            v.push_back(candidates[i]);
            combinationSum_helper(candidates, target - candidates[i], v, ans,
                                  i);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> v;
        combinationSum_helper(candidates, target, v, ans, 0);
        return ans;
    }
};