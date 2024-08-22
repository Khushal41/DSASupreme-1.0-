// Spiral matrix[Leetcode]
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int total_element = m * n;

        int startingRow = 0;
        int endingCol = n - 1;
        int endingRow = m - 1;
        int startingCol = 0;

        int count = 0;

        while (count < total_element)
        {
            // print startingRow
            for (int i = startingCol; i <= endingCol && count < total_element; i++)
            {
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;

            // print endingcol
            for (int i = startingRow; i <= endingRow && count < total_element; i++)
            {
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;

            // print startingRow
            for (int i = endingCol; i >= startingCol && count < total_element; i++)
            {
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
            
            // print startingCol
            for (int i = endingRow; i >= startingRow && count < total_element; i++)
            {
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};

// =====================OR==========================

// #include <bits/stdc++.h>

// using namespace std;

// vector<int> printSpiral(vector<vector<int>> mat)
// {

//     // Define ans array to store the result.
//     vector<int> ans;

//     int n = mat.size();    // no. of nows
//     int m = mat[0].size(); // no. of columns

//     // Initialize the pointers reqd for traversal.
//     int top = 0, left = 0, bottom = n - 1, right = m - 1;

//     // Loop until all elements are not traversed.
//     while (top <= bottom && left <= right)
//     {

//         // For moving left to right
//         for (int i = left; i <= right; i++)
//             ans.push_back(mat[top][i]);

//         top++;

//         // For moving top to bottom.
//         for (int i = top; i <= bottom; i++)
//             ans.push_back(mat[i][right]);

//         right--;

//         // For moving right to left.
//         if (top <= bottom)
//         {
//             for (int i = right; i >= left; i--)
//                 ans.push_back(mat[bottom][i]);

//             bottom--;
//         }

//         // For moving bottom to top.
//         if (left <= right)
//         {
//             for (int i = bottom; i >= top; i--)
//                 ans.push_back(mat[i][left]);

//             left++;
//         }
//     }
//     return ans;
// }

// int main()
// {

//     // Matrix initialization.
//     vector<vector<int>> mat{{1, 2, 3, 4},
//                             {5, 6, 7, 8},
//                             {9, 10, 11, 12},
//                             {13, 14, 15, 16}};

//     vector<int> ans = printSpiral(mat);

//     for (int i = 0; i < ans.size(); i++)
//     {

//         cout << ans[i] << " ";
//     }

//     cout << endl;

//     return 0;
// }