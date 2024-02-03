// Q->Sort An Array [912-leetcode]
// Given an array of integers nums, sort the array in ascending order and return it.

// You must solve the problem without using any built-in functions in O(nlog(n)) time complexity and with the smallest space complexity possible.

 

// Example 1:

// Input: nums = [5,2,3,1]
// Output: [1,2,3,5]
// Explanation: After sorting the array, the positions of some numbers are not changed (for example, 2 and 3), while the positions of other numbers are changed (for example, 1 and 5).
// class Solution
// {
// public:
//     void merge(vector<int> &v, vector<int> &temp, int start, int mid, int end)
//     {
//         int i = start, j = mid + 1, k = start;

//         // Fix the condition in the while loop
//         while (i <= mid && j <= end)
//         {
//             if (v[i] <= v[j])
//                 temp[k++] = v[i++];
//             else
//                 temp[k++] = v[j++];
//         }

//         // Handle remaining elements in both halves
//         while (i <= mid)
//             temp[k++] = v[i++];
//         while (j <= end)
//             temp[k++] = v[j++];

//         // Copy elements from temp back to v
//         for (int i = start; i <= end; ++i)
//         {
//             v[i] = temp[i];
//         }
//     }

//     // Fix the mid calculation in the mergeSort function
//     void mergeSort(vector<int> &v, vector<int> &temp, int start, int end)
//     {
//         if (start >= end)
//             return;

//         // Fix the mid calculation
//         int mid = (start + end) / 2;

//         mergeSort(v, temp, start, mid);
//         mergeSort(v, temp, mid + 1, end);
//         merge(v, temp, start, mid, end);
//     }

//     vector<int> sortArray(vector<int> &nums)
//     {
//         vector<int> temp(nums.size(), 0);
//         mergeSort(nums, temp, 0, nums.size() - 1);
//         return nums;
//     }
// };

class Solution
{
public:
    void mergeInPlace(vector<int> &v, int start, int mid, int end)
    {
        int total_len = end - start + 1;
        int gap = total_len / 2 + total_len % 2;
        while (gap > 0)
        {
            int i = start, j = start + gap;
            while (j <= end)
            {
                if (v[i] > v[j])
                {
                    swap(v[i], v[j]);
                }
                else
                {
                    i++;
                    j++;
                }
            }
            gap = gap <= 1 ? 0 : (gap / 2) + (gap % 2);
        }
    }

    // Fix the mid calculation in the mergeSort function
    void mergeSort(vector<int> &v, int start, int end)
    {
        if (start >= end)
            return;

        // Fix the mid calculation
        int mid = (start + end) / 2;

        mergeSort(v, start, mid);
        mergeSort(v, mid + 1, end);
        mergeInPlace(v, start, mid, end);
    }

    vector<int> sortArray(vector<int> &nums)
    {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};