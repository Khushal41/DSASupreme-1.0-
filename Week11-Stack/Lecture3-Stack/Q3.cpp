// Next smaller element
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Function to find the previous smaller element for each element in the input vector
vector<int> prevSmallerElement(vector<int> &input)
{
    // Create a stack to store elements for comparison, initialized with -1 (as no element can be smaller than -1)
    stack<int> s;
    s.push(-1);

    // Create a vector to store the result (previous smaller elements)
    vector<int> ans(input.size());

    // Traverse the input vector from left to right
    for (int i = 0; i < input.size(); i++)
    {
        int curr = input[i]; // Get the current element

        // Check the top element of the stack. Pop elements from the stack until
        // the top element is smaller than the current element (since we want to find the previous smaller one)
        while (s.top() >= curr)
        {
            s.pop();
        }

        // The top of the stack now contains the previous smaller element, store it in the result
        ans[i] = s.top();

        // Push the current element onto the stack for future comparisons
        s.push(curr);
    }

    // Return the vector containing all previous smaller elements
    return ans;
}

// Function to find the next smaller element for each element in the input vector
vector<int> nextSmaller(vector<int> &input)
{
    // Create a stack to store elements for comparison, initialized with -1 (as no element can be smaller than -1)
    stack<int> s;
    s.push(-1);

    // Create a vector to store the result (next smaller elements)
    vector<int> ans(input.size());

    // Traverse the input vector from right to left
    for (int i = input.size() - 1; i >= 0; i--)
    {
        int curr = input[i]; // Get the current element

        // Check the top element of the stack. Pop elements from the stack until
        // the top element is smaller than the current element (since we want to find the next smaller one)
        while (s.top() >= curr)
        {
            s.pop();
        }

        // The top of the stack now contains the next smaller element, store it in the result
        ans[i] = s.top();

        // Push the current element onto the stack for future comparisons
        s.push(curr);
    }

    // Return the vector containing all next smaller elements
    return ans;
}

int main()
{
    // Create a vector of input elements
    vector<int> input;
    input.push_back(2);
    input.push_back(1);
    input.push_back(4);
    input.push_back(3);

    // Call the nextSmaller function and store the result in ans1
    vector<int> ans1 = nextSmaller(input);

    // Print the result of next smaller elements
    cout << "Printing ans1" << endl;
    for (int i = 0; i < input.size(); i++)
    {
        cout << ans1[i] << " "; // Output: -1 -1 3 -1
    }
    cout << endl;

    // Call the prevSmallerElement function and store the result in ans2
    vector<int> ans2 = prevSmallerElement(input);

    // Print the result of previous smaller elements
    cout << "Printing ans2 " << endl;
    for (int i = 0; i < input.size(); i++)
    {
        cout << ans2[i] << " "; // Output: -1 -1 1 1
    }
    cout << endl;

    return 0;
}
