// Merge node in between zero [Leetcode-2181]

class Solution
{
public:
    ListNode *mergeNodes(ListNode *head)
    {
        if (!head)
            return 0;
        ListNode *slow = head, *fast = head->next, *newLastNode = 0;
        int sum = 0;
        while (fast)
        {
            if (fast->val != 0)
            {
                sum += fast->val;
            }
            else
            {
                // fast -> val == 0
                slow->val = sum;
                newLastNode = slow;
                slow = slow->next;
                sum = 0;
            }
            fast = fast->next;
        }
        ListNode *temp = newLastNode->next;
        // Formed new list
        newLastNode->next = 0;

        // Deleteing old list
        while (temp)
        {
            ListNode *nxt = temp->next;
            delete temp;
            temp = nxt;
        }
        return head;
    }
};