// Insert Node At Head And Tail
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// I want to insert node right at the heade of Linked List :-
void insertAtHead(Node *&head, Node *&tail, int data)
{
    // Cheak for Empty LL
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // Step 1:-Create newNode
    Node *newNode = new Node(data);
    // Step 2:-Connect with head node
    newNode->next = head;
    // Srep 3:- Update head
    head = newNode;
};
// I want to insert node right at the end of Linked List :-
void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // Step 1:-Create newNode
    Node *newNode = new Node(data);
    // Step 2:-Connect with tail node
    tail->next = newNode;
    // Srep 3:- Update Tail
    tail = newNode;
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL) // till go tu NULL
    {
        cout << temp->data << " "; // data print
        temp = temp->next;         // go to next node
    }
};
int main()
{
    // Node *head = new Node(10);
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 100);
    insertAtTail(head, tail, 77);
    insertAtHead(head, tail, 200);

    print(head);

    return 0;
}