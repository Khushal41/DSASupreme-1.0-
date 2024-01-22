// Remove all occurance of substring[Leetcode- 1910]

class Solution
{
public:
    void removeOCC(string &s, string &part)
    {
        int found = s.find(part);
        if (found != string::npos)
        {
            // part string has been loacted
            // please remove id
            string left_part = s.substr(0, found);
            string right_part = s.substr(found + part.size(), s.size());
            s = left_part + right_part;

            removeOCC(s, part);
        }
        else
        {
            // Base case
            // ALL the occurrences of part haas been remove from it
            return;
        }
    }
    string removeOccurrences(string s, string part)
    {
        removeOCC(s, part);
        return s;
    }
};