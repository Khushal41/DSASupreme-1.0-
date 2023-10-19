// Longest common prifix [LeetCode -> 14]
// Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix,return an empty string "".

//     Example 1 :

//     Input : strs = [ "flower", "flow", "flight" ]
//     Output : "fl" Example 2 :

//     Input : strs = [ "dog", "racecar", "car" ]
//     Output : "" Explanation : There is no common prefix among the input strings.

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string ans;
        int i = 0;
        while (true)
        {
            char curr_ch = 0;
            for (auto str : strs)
            {
                if (i >= str.size())
                {
                    // Out of bound
                    curr_ch = 0;
                    break;
                }
                // Just stared iteration
                if (curr_ch == 0)
                {
                    curr_ch = str[i];
                }
                else if (str[i] != curr_ch)
                {
                    curr_ch = 0;
                    break;
                }
            }
            if (curr_ch == 0)
            {
                break;
            }
            ans.push_back(curr_ch);
            i++;
        }
        return ans;
    }
};