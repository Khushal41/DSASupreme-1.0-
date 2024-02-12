// Q-> Remove duplicate from a sorted LL
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

void removeDuplicates(Node *&haed)
{
    if (haed == NULL)
    {
        cout << "LL is empty " << endl;
        return;
    }
    if (haed->next == NULL)
    {
        cout << "Single Node in LL" << endl;
        return;
    }

    // >1 node in LL :-
    Node *curr = haed;
    while (curr != NULL)
    {
        if ((curr->next != NULL) && (curr->data == curr->next->data))
        {
            // Equal
            Node *temp = curr->next;
            curr->next = curr->next->next;
            // Delete node
            temp->next = NULL;
            delete temp;
        }
        else
        {
            // Not equal
            curr = curr->next;
        }
    }
};

int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(20);
    Node *fourth = new Node(30);
    Node *fifth = new Node(40);
    Node *sixth = new Node(40);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    cout << "Input LL :- ";
    print(head);

    removeDuplicates(head);
    cout << "Output LL :- ";
    print(head);

    return 0;
}