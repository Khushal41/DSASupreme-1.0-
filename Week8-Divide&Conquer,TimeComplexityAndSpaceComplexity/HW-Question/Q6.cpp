// Combination sum 2 - [Leetcode 40]
// Given a collection of candidate numbers(candidates) and a target number(target), find all unique combinations in candidates where the candidate numbers sum to target.

//  Each number in candidates may only be used once in the combination.

// Note : The solution set must not contain duplicate combinations.

//                                                                                         Example 1 :

//     Input : candidates = [ 10, 1, 2, 7, 6, 1, 5 ],
//             target = 8 Output : [
//                 [ 1, 1, 6 ],
//                 [ 1, 2, 5 ],
//                 [ 1, 7 ],
//                 [ 2, 6 ]
//             ] Example 2 :

//     Input : candidates = [ 2, 5, 2, 1, 2 ],
//             target = 5 Output : [
//                 [ 1, 2, 2 ],
//                 [5]
//             ] 
class Solution
{
public:
    // Helper function for recursive backtracking
    void combinationSum_helper(vector<int> &candidates, int target,
                               vector<int> &v, vector<vector<int>> &ans,
                               int index)
    {
        // Base case: If the target is reached
        if (target == 0)
        {
            ans.push_back(v); // Add the current combination to the result
            return;
        }

        // Base case: If the target becomes negative
        if (target < 0)
        {
            return;
        }

        // Iterate through candidates starting from the given index
        for (int i = index; i < candidates.size(); i++)
        {
            // Skip duplicates to avoid duplicate combinations
            if (i > index && candidates[i] == candidates[i - 1])
            {
                continue;
            }

            // Include the current candidate in the combination
            v.push_back(candidates[i]);

            // Recursively call the function with updated target and index
            combinationSum_helper(candidates, target - candidates[i], v, ans, i + 1);

            // Backtrack by removing the last added candidate
            v.pop_back();
        }
    }

    // Main function to find combinations with duplicates
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        // Sort the candidates to handle duplicates efficiently
        sort(candidates.begin(), candidates.end());

        // Initialize vectors to store the final combinations and the current combination
        vector<vector<int>> ans;
        vector<int> v;

        // Start the recursive backtracking process
        combinationSum_helper(candidates, target, v, ans, 0);

        // Return the final result
        return ans;
    }
};
