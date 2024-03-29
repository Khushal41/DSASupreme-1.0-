// Valid Parenthses [Leetcode-20]
class Solution
{
public:
    bool isValid(string s)
    {

        stack<char> st;

        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];

            // opening bracket
            if (ch == '(' || ch == '{' || ch == '[')
            {
                st.push(ch);
            }
            else
            {
                // closing bracket - ch
                if (!st.empty())
                {
                    char topCh = st.top();
                    if (ch == ')' && topCh == '(')
                    {
                        // matching brackets
                        st.pop();
                    }
                    else if (ch == '}' && topCh == '{')
                    {
                        // matching brackets
                        st.pop();
                    }
                    else if (ch == ']' && topCh == '[')
                    {
                        // matching brackets
                        st.pop();
                    }
                    else
                    {
                        // brackets not matching
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }

        if (st.empty())
        {
            // valid
            return true;
        }
        else
        {
            return false;
        }
    }
};

// #include <bits/stdc++.h>
// using namespace std;
// bool isValid(string s)
// {
//     stack<char> st;
//     for (auto it : s)
//     {
//         if (it == '(' || it == '{' || it == '[')
//             st.push(it);
//         else
//         {
//             if (st.size() == 0)
//                 return false;
//             char ch = st.top();
//             st.pop();
//             if ((it == ')' and ch == '(') or (it == ']' and ch == '[') or (it == '}' and ch == '{'))
//                 continue;
//             else
//                 return false;
//         }
//     }
//     return st.empty();
// }
// int main()
// {
//     string s = "()[{}()]";
//     if (isValid(s))
//         cout << "True" << endl;
//     else
//         cout << "False" << endl;
// }