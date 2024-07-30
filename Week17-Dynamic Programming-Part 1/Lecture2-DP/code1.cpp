// # Coin Change Problem [Leet-> 322]
class Solution
{
public:
    // Recursive solution to find the minimum number of coins needed for a given amount
    int solveUsingRecursion(vector<int> &coins, int amount)
    {
        // Base case: if amount is 0, no coins are needed
        if (amount == 0)
        {
            return 0;
        }
        // If amount is negative, return a large value indicating it's not possible
        if (amount < 0)
        {
            return INT_MAX;
        }

        int mini = INT_MAX;
        // Try every coin and recursively solve for the remaining amount
        for (int i = 0; i < coins.size(); i++)
        {
            int ans = solveUsingRecursion(coins, amount - coins[i]);
            // If a valid answer is found, update the minimum count of coins needed
            if (ans != INT_MAX)
            {
                mini = min(mini, 1 + ans);
            }
        }
        return mini;
    }

    // Memoization solution to find the minimum number of coins needed for a given amount
    int solveMem(vector<int> &coins, int amount, vector<int> &dp)
    {
        // Base case: if amount is 0, no coins are needed
        if (amount == 0)
        {
            return 0;
        }
        // If amount is negative, return a large value indicating it's not possible
        if (amount < 0)
        {
            return INT_MAX;
        }
        // If the answer for this amount is already calculated, return it
        if (dp[amount] != -1)
        {
            return dp[amount];
        }

        int mini = INT_MAX;
        // Try every coin and recursively solve for the remaining amount with memoization
        for (int i = 0; i < coins.size(); i++)
        {
            int ans = solveMem(coins, amount - coins[i], dp);
            // If a valid answer is found, update the minimum count of coins needed
            if (ans != INT_MAX)
            {
                mini = min(mini, 1 + ans);
            }
        }
        dp[amount] = mini; // Store the result in the dp array
        return dp[amount];
    }

    // Tabulation (bottom-up) solution to find the minimum number of coins needed for a given amount
    int solveTab(vector<int> &coins, int amount)
    {
        // Step 1: Create a dp array with size amount+1 and initialize all values to INT_MAX
        vector<int> dp(amount + 1, INT_MAX);
        // Step 2: Base case: 0 coins are needed to make amount 0
        dp[0] = 0;
        // Step 3: Fill the dp array for all amounts from 1 to the given amount
        for (int target = 1; target <= amount; target++)
        {
            int mini = INT_MAX;
            // Try every coin to find the minimum coins needed for the current target amount
            for (int i = 0; i < coins.size(); i++)
            {
                if (target - coins[i] >= 0)
                {
                    int ans = dp[target - coins[i]];
                    // If a valid answer is found, update the minimum count of coins needed
                    if (ans != INT_MAX)
                    {
                        mini = min(mini, 1 + ans);
                    }
                }
            }
            dp[target] = mini; // Store the result in the dp array
        }
        return dp[amount];
    }

    // Main function to find the minimum number of coins needed for a given amount
    int coinChange(vector<int> &coins, int amount)
    {
        // Uncomment the following lines to use the recursive solution
        // int ans = solveUsingRecursion(coins, amount);
        // if(ans == INT_MAX)
        //     return -1;
        // else
        //     return ans;

        // Uncomment the following lines to use the memoization solution
        // vector<int> dp(amount+1, -1);
        // int ans = solveMem(coins, amount, dp);
        // if(ans == INT_MAX)
        //     return -1;
        // else
        //     return ans;

        // Use the tabulation solution
        int ans = solveTab(coins, amount);
        if (ans == INT_MAX)
            return -1;
        else
            return ans;
    }
};
