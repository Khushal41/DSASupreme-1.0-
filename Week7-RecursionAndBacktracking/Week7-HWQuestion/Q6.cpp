// Print all subarray using Recursion 
#include <iostream>
#include <vector>
using namespace std;
void printSubarray(vector<int> &nums, int start, int end)
{
    // Base case
    if (end == nums.size())
    {
        return;
    }
    // 1 case solve
    for (int i = start; i <= end; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;  
    // Rcursion sambhal lega
    printSubarray(nums, start, end + 1);
}
int main()
{
    vector<int> nums{1, 2, 3, 4, 5};
    printSubarray(nums, 0, 0);
    return 0;
}