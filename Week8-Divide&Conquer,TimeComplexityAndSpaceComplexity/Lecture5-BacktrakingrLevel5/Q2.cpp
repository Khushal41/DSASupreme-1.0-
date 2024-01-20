// Letter combination of phone number [GFG]
class Solution {
public:

    void solve(vector<string> &ans,int index, string output, string digits,vector<string> &mapping) {
        //base case
        if(index >= digits.length()) {
            ans.push_back(output);
            return;
        }

        //1 case solve, baaki recursion
        char digitCharacter = digits[index];

        int digitInteger = digitCharacter -'0';// string to digit

        string value = mapping[digitInteger];

        for(int i=0; i<value.length(); i++) {
            char ch = value[i];

            //include
            //output.push_back(ch);
            //recursive call
            solve(ans, index+1, output + ch, digits, mapping);
            //backtrack
           // output.pop_back();
        }

    }

    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        //empty string k liye answer empty array hoga
        if(digits.length() == 0)
            return ans;

        int index = 0;
        string output = "";
        vector<string> mapping(10);
        mapping[2] = "abc";
        mapping[3] = "def";
        mapping[4] = "ghi";
        mapping[5] = "jkl";
        mapping[6] = "mno";
        mapping[7] = "pqrs";
        mapping[8] = "tuv";
        mapping[9] = "wxyz";

        // unordered_map<int, string> mapping;
        // mapping[2] = "abc";
        // mapping[3] = "def";
        // mapping[4] = "ghi";
        // mapping[5] = "jkl";
        // mapping[6] = "mno";
        // mapping[7] = "pqrs";
        // mapping[8] = "tuv";
        // mapping[9] = "wxyz";

        solve(ans, index, output, digits, mapping);

        return ans;

    }
};

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    void findcomb(vector<char> keypad[], int input[], string res, int index, int n, vector<string> &ans)
    {
        if (index == n)
        {
            ans.push_back(res);
            return;
        }
        int digit = input[index];
        int len = keypad[digit].size();
        for (int i = 0; i < len; i++)
        {
            findcomb(keypad, input, res + keypad[digit][i], index + 1, n, ans);
        }
    }
    // Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        // Your code here
        vector<char> keypad[] = {{},
                                 {},
                                 {'a', 'b', 'c'},
                                 {'d', 'e', 'f'},
                                 {'g', 'h', 'i'},
                                 {'j', 'k', 'l'},
                                 {'m', 'n', 'o'},
                                 {'p', 'q', 'r', 's'},
                                 {'t', 'u', 'v'},
                                 {'w', 'x', 'y', 'z'}};
        vector<string> ans;
        string x = "";
        findcomb(keypad, a, x, 0, N, ans);
        return ans;
    }
};

// //{ Driver Code Starts.

// int main()
// {

//     int T;

//     cin >> T; // testcases

//     while (T--)
//     { // while testcases exist
//         int N;

//         cin >> N; // input size of array

//         int a[N]; // declare the array

//         for (int i = 0; i < N; i++)
//         {
//             cin >> a[i]; // input the elements of array that are keys to be pressed
//         }

//         Solution obj;

//         vector<string> res = obj.possibleWords(a, N);
//         for (string i : res)
//             cout << i << " ";
//         cout << endl;
//     }

//     return 0;
// }
// // } Driver Code Ends