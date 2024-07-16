

        // # Longest common prefix[Leetcode->14]
        string longestCommonPrefix(vector<string> &strs)
        {
                string ans = "";
                // loop on first string
                for (int i = 0; i < strs[0].length(); i++)
                {
                        char ch = strs[0][i];
                        bool match = true;

                        // compare this charachter with alll
                        // the remaining strings at the same index
                        for (int j = 1; j < strs.size(); j++)
                        {
                                // compare
                                if (strs[j].size() < i || ch != strs[j][i])
                                {
                                        match = false;
                                        break;
                                }
                        }

                        if (match == false)
                                break;
                        else
                                ans.push_back(ch);
                }
                return ans;
        }
};