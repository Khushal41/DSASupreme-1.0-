// Book Allocation Problem
// You have N books, each with A[i] number of pages. M students need to be allocated contiguous books, with each student getting at least one book.
// Out of all the permutations, the goal is to find the permutation where the student with the most books allocated to him gets the minimum number of pages, out of all possible permutations.

// Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

// } Driver Code Ends
// User function template in C++
class Solution
{
public:
    bool isPossibleSolution(int A[], int N, int M, int sol)
    {
        int pageSum = 0;
        int c = 1;
        for (int i = 0; i < N; i++)
        {
            if (A[i] > sol)
            {
                return false;
            }
            if (pageSum + A[i] > sol)
            {
                c++;
                pageSum = A[i];
                if (c > M)
                {
                    return false;
                }
            }
            else
            {
                pageSum += A[i];
            }
        }
        return true;
    }

    // Function to find minimum number of pages.
    int findPages(int A[], int N, int M)
    {
        // code here
        if (M > N)
            return -1;

        int start = 0;
        int end = accumulate(A, A + N, 0);
        int ans = -1;

        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (isPossibleSolution(A, N, M, mid))
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        int m;
        cin >> m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends