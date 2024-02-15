// kth node from the end [Hakerrandk]
// Given a pointer to the head of a linked list and a specific position, determine the data value at that position.Count backwards from the tail node.The tail is at postion 0, its parent is at 1 and so on.

void fun(SinglyLinkedListNode *head, int positionFromTail, int &ans)
{
    if (head == 0)
        return;
    fun(head->next, positionFromTail, ans);
    //
    if (positionFromTail == 0)
    {
        ans = head->data;
    }
    positionFromTail--;
}
int getNode(SinglyLinkedListNode *llist, int positionFromTail)
{
    int ans = -1;
    fun(llist, positionFromTail, ans);
    return ans;
}
