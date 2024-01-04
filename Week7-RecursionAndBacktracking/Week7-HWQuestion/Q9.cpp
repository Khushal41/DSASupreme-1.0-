// House Rober[Leetcode]

class Solution
{
public:
    int robHelper(vector<int> &nums, int i)
    {
        // Base case
        if (i >= nums.size())
        {
            return 0;
        }
        // 1 case solve
        int roberAmount1 = nums[i] + robHelper(nums, i + 2);
        int roberAmount2 = 0 + robHelper(nums, i + 1);
        // Baki recursion sambhal lega
        return max(roberAmount1, roberAmount2);
    }
    int rob(vector<int> &nums)
    {
        return robHelper(nums, 0);
    }
};