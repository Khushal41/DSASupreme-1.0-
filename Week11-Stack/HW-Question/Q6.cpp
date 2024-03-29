// Rotate List [Leetcode-61]
// Given the head of a linked list, rotate the list to the right by k places.

class Solution
{
public:
    int getLength(ListNode *head)
    {
        int len = 0;
        while (head)
        {
            ++len;
            head = head->next;
        }
        return len;
    }
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (!head)
            return 0;
        // After finding length we get last new node
        int len = getLength(head);

        int actualRotateK = (k % len);
        if (actualRotateK == 0)
            return head;
        int newLastNodePos = len - actualRotateK - 1;
        ListNode *newLastNode = head;
        for (int i = 0; i < newLastNodePos; i++)
        {
            newLastNode = newLastNode->next;
        }
        ListNode *newHead = newLastNode->next;
        newLastNode->next = 0;

        ListNode *it = newHead;
        while (it->next)
        {
            it = it->next;
        }
        it->next = head;
        return newHead;
    }
};