// Permutation 2 ->[Leetcode 47]
// Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.

// Example 1 :
// Input : nums = [ 1, 1, 2 ]
// Output : [ [ 1, 1, 2 ],[ 1, 2, 1 ],[ 2, 1, 1 ] ]

// Example 2 :
// Input : nums = [ 1, 2, 3 ]
// Output : [ [ 1, 2, 3 ], [ 1, 3, 2 ], [ 2, 1, 3 ], [ 2, 3, 1 ], [ 3, 1, 2 ], [ 3, 2, 1 ] ]

// Constraints :
//  1 <= nums.length <= 8 - 10 <=
//  nums[i] <= 10
class Solution
{
public:
    void permutationHelper(vector<int> &nums, vector<vector<int>> &ans,
                           int start)
    {
        // Base
        if (start == nums.size())
        {
            ans.push_back(nums);
            return;
        }

        unordered_map<int, bool> visited;
        for (int i = start; i < nums.size(); i++)
        {
            if (vistited.find(nums[i]) != visited.end())
            {
                continue;
            }
            visited[nums[i] = true];
            swap(nums[i], nums[start]);
            permutationHelper(nums, ans, start + 1);
            swap(nums[i], nums[start]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int> &nums)
    {
        vector<vector<int>> ans;
        permutationHelper(nums, ans, 0);
        // push ans into set
        // set<vector<int>> st;
        // for (auto e : ans)
        // {
        //     st.insert(e);
        // }
        // ans.clear();
        // for (auto e : st)
        // {
        //     ans.push_back(e);
        // }
        return ans;
    }
};