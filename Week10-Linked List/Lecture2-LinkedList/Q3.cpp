// Doubly Linked List [Insert At Head]
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
// Insert At Head :-
void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        // LL is empty case
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // LL is non-empty case
        // step1: create a node
        Node *newNode = new Node(data);
        // step2:
        newNode->next = head;
        // step3:
        head->prev = newNode;
        // step4;
        head = newNode;
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

    print(first);
    cout << endl;

    insertAtHead(head, tail, 101);

    cout << endl;
    print(head);

    // cout << endl;

    return 0;
}