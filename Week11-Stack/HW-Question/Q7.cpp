// Delete N nodes after M nodes of a linked list [GFG]

/*
delete n nodes after m nodes
  The input list will have at least one element
  Node is defined as

struct Node
{
    int data;
    struct Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }

};

*/
class Solution
{
public:
    void linkdelete(struct Node *head, int M, int N)
    {
        // Add code here
        if (!head)
            return;
        Node *it = head;
        for (int i = 0; i < M - 1; ++i)
        {
            // if M node are not avalible
            if (!it)
                return;
            it = it->next;
        }
        // it -> at mth node
        if (!it)
            return;
        Node *MthNode = it;
        it = MthNode->next;
        for (int i = 0; i < N; i++)
        {
            if (!it)
                break;

            Node *temp = it->next;
            delete it;
            it = temp;
        }
        MthNode->next = it;
        linkdelete(it, M, N);
    }
};
