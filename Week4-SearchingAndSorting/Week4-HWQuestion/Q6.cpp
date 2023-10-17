//Aggressive Cows[GFG]

//{ Driver Code Starts
// Initial Template for C++
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// // User function Template for C++

// class Solution
// {
// public:
//     bool isPossibleSolution(vector<int> &stalls, int k, int n, int mid)
//     {
//         int c = 1;
//         int pos = stalls[0];

//         for (int i = 1; i < stalls.size(); i++)
//         {
//             if (stalls[i] - pos >= mid)
//             {
//                 c++;
//                 pos = stalls[i];
//             }
//             if (c == k)
//                 return true;
//         }
//         return false;
//     }
//     int solve(int n, int k, vector<int> &stalls)
//     {

//         // Write your code here
//         sort(stalls.begin(), stalls.end());

//         int start = 0;
//         int end = stalls[stalls.size() - 1] - stalls[0];

//         int ans = -1;

//         while (start <= end)
//         {
//             int mid = (start + mid) / 2;

//             if (isPossibleSolution(stalls, k, mid, n))
//             {
//                 ans = mid;
//                 start = mid + 1;
//             }
//             else
//             {
//                 end = mid - 1;
//             }
//         }
//         return ans;
//     }
// };

// //{ Driver Code Starts.

// int main()
// {
//     int t = 1;
//     cin >> t;

//     // freopen ("output_gfg.txt", "w", stdout);

//     while (t--)
//     {
//         // Input

//         int n, k;
//         cin >> n >> k;

//         vector<int> stalls(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> stalls[i];
//         }
//         // char ch;
//         // cin >> ch;

//         Solution obj;
//         cout << obj.solve(n, k, stalls) << endl;

//         // cout << "~\n";
//     }
//     // fclose(stdout);

//     return 0;
// }
// // } Driver Code Ends
// ===============OR===================

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    bool canWePlace(vector<int> &stalls, int dist, int cows)
    {
        int n = stalls.size(); // size of array
        int cntCows = 1;       // no. of cows placed
        int last = stalls[0];  // position of last placed cow.
        for (int i = 1; i < n; i++)
        {
            if (stalls[i] - last >= dist)
            {
                cntCows++;        // place next cow.
                last = stalls[i]; // update the last location.
            }
            if (cntCows >= cows)
                return true;
        }
        return false;
    }
    int solve(int n, int k, vector<int> &stalls)
    {

        // Write your code here
        //   int n = stalls.size(); //size of array
        // sort the stalls[]:
        sort(stalls.begin(), stalls.end());

        int low = 1, high = stalls[n - 1] - stalls[0];
        // apply binary search:
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (canWePlace(stalls, mid, k) == true)
            {
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        return high;
    }
};

//{ Driver Code Starts.

int main()
{
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--)
    {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++)
        {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends