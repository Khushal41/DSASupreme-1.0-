// Longest Palindromic Substring [Leetcode-05]
// Given a string s, return the longest palindromic substring in s.
// Example 1 : Input : s = "babad" Output : "bab" 
// Explanation : "aba" is also a valid answer.
// Example 2 : 
// Input : s = "cbbd" Output : "bb"

class Solution
{
public:
    bool isPalindrome(string &s, int start, int end)
    {
        while (start < end)
        {
            if (s[start] != s[end])
            {
                return false;
            }
            start++, end--;
        }
        return true;
    }
    string longestPalindrome(string s)
    {
        string ans = "";
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = i; j < s.size(); j++)
            {
                if (isPalindrome(s, i, j))
                {
                    string t = s.substr(i, j - i + 1);
                    ans = t.size() > ans.size() ? t : ans;
                }
            }
        }
        return ans;
    }
};