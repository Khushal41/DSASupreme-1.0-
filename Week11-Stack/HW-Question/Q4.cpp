// Sort List using Merge sort [Leetcode-148]
// Given the head of a linked list, return the list after sorting it in ascending order.
class Solution
{
public:
    ListNode *findMid(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head->next;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }

    ListNode *merge(ListNode *left, ListNode *right)
    {
        if (left == 0)
            return right;
        if (right == 0)
            return left;

        ListNode *ans = new ListNode(-1);
        ListNode *mptr = ans;

        while (left && right)
        {
            if (left->val <= right->val)
            {
                mptr->next = left;
                mptr = left;
                left = left->next; // left++
            }
            else
            {
                mptr->next = right;
                mptr = right;
                right = right->next; // right++
            }
        }

        if (left)
        {
            mptr->next = left;
            // mptr = left;
            // left = left->next;
        }

        if (right)
        {
            mptr->next = right;
            // mptr = right;
            // right = right->next;
        }

        return ans->next;
    }
    ListNode *sortList(ListNode *head)
    {
        if (head == 0 || head->next == 0)
        {
            return head;
        }
        // Break LL into 2 half using mid node
        ListNode *mid = findMid(head);
        ListNode *left = head;
        ListNode *right = mid->next;
        mid->next = 0;

        // sort
        left = sortList(left);
        right = sortList(right);

        // merge both left and right LL
        ListNode *mergeLL = merge(left, right);
        return mergeLL;
    }
};