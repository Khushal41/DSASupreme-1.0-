// # House Robber [ leetCode -> 198] 
class Solution
{
public:
    // Recursive solution to find the maximum amount that can be robbed up to house n
    // n -> represents the index of the current house
    int solveUsingRecursion(vector<int> &nums, int n)
    {
        // Base case: if index is negative, no house is left to rob
        if (n < 0)
            return 0;
        // Base case: if index is 0, only one house to rob
        if (n == 0)
        {
            return nums[0];
        }

        // Include the current house and solve for n-2 houses
        int include = solveUsingRecursion(nums, n - 2) + nums[n];
        // Exclude the current house and solve for n-1 houses
        int exclude = solveUsingRecursion(nums, n - 1) + 0;

        // Return the maximum of including or excluding the current house
        return max(include, exclude);
    }

    // Memoization solution to find the maximum amount that can be robbed up to house n
    int solveUsingMem(vector<int> &nums, int n, vector<int> &dp)
    {
        // Base case: if index is negative, no house is left to rob
        if (n < 0)
            return 0;
        // Base case: if index is 0, only one house to rob
        if (n == 0)
        {
            return nums[0];
        }

        // If the answer for this house is already calculated, return it
        if (dp[n] != -1)
        {
            return dp[n];
        }

        // Include the current house and solve for n-2 houses
        int include = solveUsingMem(nums, n - 2, dp) + nums[n];
        // Exclude the current house and solve for n-1 houses
        int exclude = solveUsingMem(nums, n - 1, dp) + 0;

        // Store the result in the dp array
        dp[n] = max(include, exclude);
        return dp[n];
    }

    // Tabulation (bottom-up) solution to find the maximum amount that can be robbed up to house n
    int solveUsingTabulation(vector<int> &nums, int n)
    {
        // Create a dp array with size n+1 and initialize all values to 0
        vector<int> dp(n + 1, 0);
        // Base case: 0th house
        dp[0] = nums[0];

        // Fill the dp array for all houses from 1 to n
        for (int i = 1; i <= n; i++)
        {
            int temp = 0;
            // If there is a house at i-2, consider it
            if (i - 2 >= 0)
                temp = dp[i - 2];

            // Include the current house
            int include = temp + nums[i];
            // Exclude the current house
            int exclude = dp[i - 1] + 0;

            // Store the result in the dp array
            dp[i] = max(include, exclude);
        }

        return dp[n];
    }

    // Space optimized solution to find the maximum amount that can be robbed up to house n
    int spaceOptimisedSolution(vector<int> &nums, int n)
    {
        int prev2 = 0;       // Represents dp[i-2]
        int prev1 = nums[0]; // Represents dp[i-1]
        int curr = 0;        // Represents dp[i]

        // Iterate through all houses from 1 to n
        for (int i = 1; i <= n; i++)
        {
            int temp = 0;
            // If there is a house at i-2, consider it
            if (i - 2 >= 0)
                temp = prev2;

            // Include the current house
            int include = temp + nums[i];
            // Exclude the current house
            int exclude = prev1 + 0;

            // Store the current result
            curr = max(include, exclude);
            // Update prev2 and prev1 for the next iteration
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }

    // Main function to find the maximum amount that can be robbed
    int rob(vector<int> &nums)
    {
        int n = nums.size() - 1;

        // Uncomment the following lines to use the recursive solution
        // return solveUsingRecursion(nums, n);

        // Uncomment the following lines to use the memoization solution
        // vector<int> dp(n+1, -1);
        // return solveUsingMem(nums, n, dp);

        // Uncomment the following line to use the tabulation solution
        // return solveUsingTabulation(nums, n);

        // Use the space optimized solution
        return spaceOptimisedSolution(nums, n);
    }
};
