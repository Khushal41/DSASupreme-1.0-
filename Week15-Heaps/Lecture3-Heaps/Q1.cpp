#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Class to store information about each element
class info
{
public:
        int data; // value of the element
        int row;  // row index of the element
        int col;  // column index of the element

        info(int val, int r, int c)
        {
                data = val;
                row = r;
                col = c;
        }
};

// Comparator class for the priority queue (min-heap)
class compare
{
public:
        bool operator()(info *a, info *b)
        {
                return a->data > b->data; // min-heap based on element value
        }
};

// Function to merge k sorted arrays
vector<int> mergeKSortedArrays(int arr[][4], int k, int n)
{
        // Min-heap to store the elements
        priority_queue<info *, vector<info *>, compare> minHeap;

        // Insert the first element of each array into the min-heap
        for (int i = 0; i < k; i++)
        {
                info *temp = new info(arr[i][0], i, 0);
                minHeap.push(temp);
        }

        vector<int> ans; // Resultant merged array

        // Process the min-heap until it becomes empty
        while (!minHeap.empty())
        {
                info *temp = minHeap.top();  // Get the smallest element from the heap
                int topElement = temp->data; // Extract the data
                int topRow = temp->row;      // Extract the row index
                int topCol = temp->col;      // Extract the column index
                minHeap.pop();               // Remove the smallest element

                ans.push_back(topElement); // Add the smallest element to the result

                // If there are more elements in the same row, insert the next element into the heap
                if (topCol + 1 < n)
                {
                        info *newInfo = new info(arr[topRow][topCol + 1], topRow, topCol + 1);
                        minHeap.push(newInfo);
                }
        }
        return ans; // Return the merged array
}

int main()
{
        int arr[][4] = {{2, 4, 6, 8},
                        {1, 3, 5, 7},
                        {0, 9, 10, 11}};
        int k = 3;                                       // Number of arrays
        int n = 4;                                       // Number of elements in each array
        vector<int> ans = mergeKSortedArrays(arr, k, n); // Merge the arrays
        for (auto i : ans)                               // Print the merged array
        {
                cout << i << " ";
        }
        cout << endl;
        return 0;
}
