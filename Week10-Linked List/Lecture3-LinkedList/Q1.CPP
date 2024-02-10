#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
};

Node *getMiddle(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL is empty " << endl;
        return head;
    }
    if (head->next == NULL)
    {
        // ONLY 1 NODE
        return head;
    }
    // LL have > 1node
    Node *slow = head;
    Node *fast = head->next;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
};
int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    print(head);
    cout << "Middle Node is :" << getMiddle(head)->data << endl;

    return 0;
}