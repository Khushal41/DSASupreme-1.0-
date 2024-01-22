// Perfect square number [Leetcode-279]

// class Solution
// {
// public:
//     int numSquareHelper(int n)
//     {
//         // Base case
//         if (n == 0)
//             return 1;
//         if (n < 0)
//             return 0;

//         int ans = INT_MAX;
//         int i = 1;
//         int end = sqrt(n);
//         while (i <= end)
//         {
//             int perfectSquare = i * i;
//             int numberOfPerfectSquare = 1 + numSquareHelper(n - perfectSquare);
//             if (numberOfPerfectSquare < ans)
//             {
//                 ans = numberOfPerfectSquare;
//             }
//             ++i;
//         }
//         return ans;
//     }
//     int numSquares(int n) { return numSquareHelper(n) - 1; }
// };