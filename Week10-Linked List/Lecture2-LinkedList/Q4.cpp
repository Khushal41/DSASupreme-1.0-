// Doubly Linked List [Insert At Tail]
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        cout << "Node with value: " << this->data << " deleted" << endl;
    }
};

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}
// Insert At tail
void insertAtTail(Node *&head, Node *&tail, int data)
{

    if (head == NULL)
    {
        // LL is empty
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // LL is not empty
        Node *newNode = new Node(data);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
};
int main()
{

    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *head = first;
    Node *tail = third;

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    cout << endl;
    print(head);

    cout << endl;

    insertAtTail(head, tail, 501);

    cout << endl;
    print(head);

    return 0;
}