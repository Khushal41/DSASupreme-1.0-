// Merge Two Sorted [Leetcode-21]
// You are given the heads of two sorted linked lists list1 and list2.
// Merge the two lists into one sorted list.The list should be made by splicing together the nodes of the first two lists.
// Return the head of the merged linked list.class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *left, ListNode *right)
    {
        // If one of the lists is empty, return the other list
        if (left == 0)
            return right;
        if (right == 0)
            return left;

        // Create a dummy node to facilitate pointer manipulation
        ListNode *ans = new ListNode(-1);
        ListNode *mptr = ans; // Pointer to traverse and build the merged list

        // Iterate through both lists until either of them reaches the end
        while (left && right)
        {
            // Compare the values of the current nodes in both lists
            if (left->val <= right->val)
            {
                // Append the smaller node to the merged list
                mptr->next = left;
                mptr = left;       // Move the merge pointer forward
                left = left->next; // Move to the next node in the left list
            }
            else
            {
                mptr->next = right;
                mptr = right;
                right = right->next; // Move to the next node in the right list
            }
        }

        // Append any remaining nodes from the left list
        if (left)
        {
            mptr->next = left;
        }

        // Append any remaining nodes from the right list
        if (right)
        {
            mptr->next = right;
        }

        // Extract the merged list from the dummy node
        ListNode *mergedList = ans->next;
        // Delete the dummy node to avoid memory leak
        delete ans;
        // Return the merged list
        return mergedList;
    }
};