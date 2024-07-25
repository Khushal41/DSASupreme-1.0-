// # Fibonaaci Number [Leet-509]
class Solution
{
public:
    // Recursive solution without memoization
    int recSolve(int n)
    {
        // Base case: If n is 0 or 1, return n
        if (n == 1 || n == 0)
        {
            return n;
        }
        // Recursive case: Sum of the previous two Fibonacci numbers
        int ans = recSolve(n - 1) + recSolve(n - 2);
        return ans;
    }

    // Recursion with memoization (top-down approach)
    int topDownSolve(int n, vector<int> &dp)
    {
        // Base case: If n is 0 or 1, return n
        if (n == 1 || n == 0)
        {
            return n;
        }
        // Step 3: Check if the answer is already computed
        if (dp[n] != -1)
        {
            return dp[n];
        }
        // Step 2: Compute the answer and store it in dp[n]
        dp[n] = topDownSolve(n - 1, dp) + topDownSolve(n - 2, dp);
        return dp[n];
    }

    // Iterative solution using tabulation (bottom-up approach)
    int bottomUpSolve(int n)
    {
        // Step 1: Create a dp array
        vector<int> dp(n + 1, -1);

        // Step 2: Base cases
        dp[0] = 0;
        if (n == 0)
            return dp[0];
        dp[1] = 1;

        // Step 3: Fill the dp array iteratively
        for (int i = 2; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n];
    }

    // Space optimized solution
    int spaceOptSOlve(int n)
    {
        // Step 2: Base cases
        int prev2 = 0; // F(0)
        int prev1 = 1; // F(1)

        if (n == 0)
            return prev2;
        if (n == 1)
            return prev1;

        int curr;
        // Step 3: Compute the result iteratively with constant space
        for (int i = 2; i <= n; i++)
        {
            curr = prev1 + prev2;
            // Shifting the previous values
            prev2 = prev1;
            prev1 = curr;
        }

        return curr;
    }

    // Function to compute the nth Fibonacci number
    int fib(int n)
    {
        // Uncomment the desired solution method

        // Recursive solution
        // int ans = recSolve(n);
        // return ans;

        // Top-down approach with memoization
        // vector<int> dp(n + 1, -1);
        // int ans = topDownSolve(n, dp);
        // return ans;

        // Space-optimized solution
        return spaceOptSOlve(n);
    }
};
