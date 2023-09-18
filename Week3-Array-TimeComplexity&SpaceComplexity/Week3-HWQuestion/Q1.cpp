// Question link : -https: // leetcode.com/problems/sort-colors/description/ compile on leetcode
// Sort color
// class Solution
// {
// public:
//     void sortColors(vector<int> &nums)
//     {
// sort(nums.begin().nums.end());

//         =============== 2 :-Counting Mrthod===========
//          int cnt0 = 0, cnt1 = 0, cnt2 = 0;

// for (int i = 0; i < nums.size(); i++)
// {
//     if (nums[i] == 0)
//         cnt0++;
//     else if (nums[i] == 1)
//         cnt1++;
//     else
//         cnt2++;
// }

// // Replace the places in the original array:
// for (int i = 0; i < cnt0; i++)
//     nums[i] = 0; // replacing 0's

// for (int i = cnt0; i < cnt0 + cnt1; i++)
//     nums[i] = 1; // replacing 1's

// for (int i = cnt0 + cnt1; i < nums.size(); i++)
//     nums[i] = 2; // replacing 2's
// }

// == == == == == == == = 3 : -Pointer  Mrthod == == == == == =
// int low = 0, high = nums.size() - 1, mid = 0;
// while (mid <= high)
// {
//     if (nums[mid] == 0)
//     {
//         swap(nums[low], nums[mid]);
//         low++, mid++;
//     }
//     else if (nums[mid] == 1)
//     {
//         mid++;
//     }
//     else
//     {
//         swap(nums[mid], nums[h]);
//         high--;
//     }
// }

// };

#include <bits/stdc++.h>
using namespace std;

void sortArray(vector<int> &arr, int n)
{

    int cnt0 = 0, cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            cnt0++;
        else if (arr[i] == 1)
            cnt1++;
        else
            cnt2++;
    }

    // Replace the places in the original array:
    for (int i = 0; i < cnt0; i++)
        arr[i] = 0; // replacing 0's

    for (int i = cnt0; i < cnt0 + cnt1; i++)
        arr[i] = 1; // replacing 1's

    for (int i = cnt0 + cnt1; i < n; i++)
        arr[i] = 2; // replacing 2's
}

int main()
{
    int n = 6;
    vector<int> arr = {0, 2, 1, 2, 0, 1};
    sortArray(arr, n);
    cout << "After sorting:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
