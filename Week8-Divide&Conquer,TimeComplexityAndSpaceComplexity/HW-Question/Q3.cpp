// Maximum subarray sum [58->Leetcode]
// Given an integer array nums, find the subarray with the largest sum, and return its sum.
//     Example 1 :
//     Input : nums = [ -2, 1, -3, 4, -1, 2, 1, -5, 4 ] 
//     Output : 6 Explanation : The subarray[4, -1, 2, 1] has the largest sum 6.

int maxSumArrayHelper(vector<int> &v, int start, int end)
{
    if (start == end)
        return v[start];

    int maxLeftBorderSum = INT_MIN, maxRightBorderSum = INT_MIN;
    int leftBorderSum = 0, rightBorderSum = 0;
    int mid = start + (end - start) / 2;

    // Calculate max sum in the left and right subarrays
    int maxLeftSum = maxSumArrayHelper(v, start, mid);
    int maxRightSum = maxSumArrayHelper(v, mid + 1, end);

    // Calculate max cross-border sum.
    for (int i = mid; i >= start; i--)
    {
        leftBorderSum += v[i];
        if (leftBorderSum > maxLeftBorderSum)
            maxLeftBorderSum = leftBorderSum;
    }

    for (int i = mid + 1; i <= end; i++)
    { // Fix the loop increment
        rightBorderSum += v[i];
        if (rightBorderSum > maxRightBorderSum)
            maxRightBorderSum = rightBorderSum;
    }

    int crossBorderSum = maxLeftBorderSum + maxRightBorderSum;

    // Return the maximum of the three sums
    return max(max(maxLeftSum, maxRightSum), crossBorderSum);
}
