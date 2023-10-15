// Find k - closest element [638 - LeetCode]

class Solution
{
public:
    int lowerBound(vector<int> &arr, int x)
    {
        int start = 0, end = arr.size() - 1;
        int ans = end;
        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (arr[mid] >= x)
            {
                ans = mid;
                end = mid - 1;
            }
            else if (x > arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid + 1;
            }
        }
        return ans;
    }
    vector<int> bs_method(vector<int> &arr, int k, int x)
    {
        // Lower Bound
        int high = lowerBound(arr, x);
        int low = high - 1;
        while (k--)
        {
            if (low < 0)
            {
                high++;
            }
            else if (high >= arr.size())
            {
                low--;
            }
            else if (x - arr[low] > arr[high] - x)
            {
                high++;
            }
            else
            {
                low--;
            }
        }
        return vector<int>(arr.begin() + low + 1, arr.begin() + h);
    }
    vector<int> twoPointerMethod(vector<int> &arr, int k, int x)
    {
        int low = 0, high = arr.size() - 1;
        while (high - low >= k)
        {
            if (x - arr[low] > arr[high] - x)
            {
                low++;
            }
            else
            {
                high--;
            }
        }
        vector<int> ans;
        for (int i = low; i <= high; i++)
        {
            ans.push_back(arr[i]);
        }
        return ans;
    }
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        return bs_method(arr, k, x);
    }
};