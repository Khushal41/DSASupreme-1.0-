// # Insert And Delete Element In Heap :-
#include <iostream>
using namespace std;
class Heap
{
public:
        int arr[101]; // Array to store heap elements
        int size;     // Number of elements in the heap

        // Constructor to initialize the heap
        Heap()
        {
                size = 0;
                arr[0] = -1; // Initialize the 0th index to -1 (not used in heap)
        }

        // Method to insert a value into the heap
        void insert(int value)
        {
                // Increment the size of the heap
                size = size + 1;
                int index = size;   // Index of the newly inserted element
                arr[index] = value; // Insert the value at the end

                // Bubble up the newly inserted value to its correct position
                while (index > 1)
                {
                        int parentIndex = index / 2;
                        if (arr[index] > arr[parentIndex])
                        {
                                // Swap if the current node is greater than its parent
                                swap(arr[index], arr[parentIndex]);
                                index = parentIndex; // Move up to the parent index
                        }
                        else
                        {
                                break; // If the current node is not greater than its parent, break
                        }
                }
        }

        // Method to delete the root element from the heap
        int deleteRoot()
        {
                // If the heap is empty, return -1
                if (size == 0)
                        return -1;

                int ans = arr[1];   // Store the root value to be returned
                arr[1] = arr[size]; // Replace the root with the last element
                size--;             // Reduce the size of the heap

                // Bubble down the root element to its correct position
                int index = 1;
                while (index <= size)
                {
                        int left = 2 * index;      // Left child index
                        int right = 2 * index + 1; // Right child index

                        int largest = index;

                        if (left <= size && arr[largest] < arr[left])
                        {
                                largest = left; // Update largest if the left child is greater
                        }
                        if (right <= size && arr[largest] < arr[right])
                        {
                                largest = right; // Update largest if the right child is greater
                        }

                        if (largest == index)
                        {
                                // If the current node is in its correct position, break
                                break;
                        }
                        else
                        {
                                // Swap the current node with the largest child
                                swap(arr[index], arr[largest]);
                                index = largest; // Move down to the largest child index
                        }
                }
                return ans; // Return the deleted root value
        }
};

int main()
{
        Heap h; // heap object

        // Manually insert some elements into the heap for testing
        h.arr[0] = -1;
        h.arr[1] = 100;
        h.arr[2] = 50;
        h.arr[3] = 60;
        h.arr[4] = 40;
        h.arr[5] = 45;
        h.size = 5;

        // Insert additional elements into the heap
        // h.insert(50);
        // h.insert(30);
        // h.insert(70);
        // h.insert(40);
        // h.insert(80);
        // h.insert(100);

        // Print the heap elements
        cout << "printing the heap " << endl;
        for (int i = 1; i <= h.size; i++)
        {
                cout << h.arr[i] << " ";
        }
        cout << endl;

        // Insert another element and print the heap again
        h.insert(110);
        cout << endl
             << "printing the heap " << endl;
        for (int i = 1; i <= h.size; i++)
        {
                cout << h.arr[i] << " ";
        }
        cout << endl;

        return 0;
}
