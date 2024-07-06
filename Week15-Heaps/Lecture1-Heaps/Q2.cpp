// # Hepify & Heap Bulid Using Array & Heap Sort
#include <iostream>
using namespace std;

// Function to maintain the heap property for a subtree rooted at index i
void heapify(int arr[], int n, int i)
{
        int index = i;              // Start with the current index
        int leftIndex = 2 * i;      // Left child index
        int rightIndex = 2 * i + 1; // Right child index
        int largest = index;        // Initialize largest as the root

        // Check if left child exists and is greater than the current largest
        if (leftIndex <= n && arr[largest] < arr[leftIndex])
        {
                largest = leftIndex;
        }
        // Check if right child exists and is greater than the current largest
        if (rightIndex <= n && arr[largest] < arr[rightIndex])
        {
                largest = rightIndex;
        }

        // If the largest is not the root, swap and continue heapifying
        if (index != largest)
        {
                swap(arr[index], arr[largest]);
                heapify(arr, n, largest); // Recursively heapify the affected subtree
        }
}

// Function to build a max-heap from an array
void buildHeap(int arr[], int n)
{
        // Start from the last non-leaf node and heapify each node
        for (int i = n / 2; i > 0; i--)
        {
                heapify(arr, n, i);
        }
}

// Function to perform heap sort on an array
void heapSort(int arr[], int n)
{
        // Repeat the process until there is only one element left in the heap
        while (n > 1)
        {
                // Move the current largest element (root) to the end of the array
                swap(arr[1], arr[n--]);
                // Restore the heap property for the remaining heap
                heapify(arr, n, 1);
        }
}

int main()
{
        int arr[] = {-1, 12, 56, 43, 6, 78, 87, 5, 44, 3, 23, 32}; // Array with 12 elements (index 0 not used)
        int n = 11;                                                // Number of elements in the heap
        buildHeap(arr, n);                                         // Build a max-heap from the array

        cout << "Printing the heap: " << endl;
        for (int i = 1; i <= n; i++)
        {
                cout << arr[i] << " ";
        }
        cout << endl;

        heapSort(arr, n); // Sort the array using heap sort

        cout << "Printing the sorted array: " << endl;
        for (int i = 1; i <= n; i++)
        {
                cout << arr[i] << " ";
        }
        cout << endl;

        return 0;
}
