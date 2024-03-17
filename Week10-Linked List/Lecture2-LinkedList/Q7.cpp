// Q-> Reverse a Linked List
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

    // // TODO: Write a destrcutor to delete a node
    ~Node()
    {
        // write your code here
        cout << "Node with value: " << this->data << "deleted" << endl;
    }
};
// I want to insert a node right at the head of Linked List
void insertAtHead(Node *&head, Node *&tail, int data)
{
    // check for Empty LL
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // step1:
        Node *newNode = new Node(data);
        // step2:
        newNode->next = head;
        // step3:
        head = newNode;
    }
}
// I want to insert a node right at the end of LINKED LIST
void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // step1: creatae a node
    Node *newNode = new Node(data);
    // step2: connect woth tail ndoe
    tail->next = newNode;
    // step3: update tail;
    tail = newNode;
}
void print(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int findLength(Node *&head)
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

// Reverse LL Head :-
Node *reverse(Node *&prev, Node *&curr)
{
    // base case
    if (curr == NULL)
    {
        // LL reverse ho chuki
        return prev;
    }

    // 1 case solve then recursion will take care
    Node *forward = curr->next;
    curr->next = prev;
    // Baki recursion sambhal lega
    reverse(curr, forward); // prev,next
}

Node *reverseusingLoop(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;

    while (curr != NULL)
    {
        Node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

Node *reverseusingRecursion(Node *prev, Node *curr)
{
    // base case
    if (curr == NULL)
        return prev;

    Node *temp = curr->next;
    curr->next = prev;
    prev = curr;
    curr = temp;

    // recursion sambhal lega
    return reverseusingRecursion(prev, curr);
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 60);
    insertAtHead(head, tail, 90);
    insertAtTail(head, tail, 77);

    print(head);
    cout << endl;

    Node *prev = NULL;
    Node *curr = head;
    cout << "printing reverse list" << endl;
    // head  = reverseusingLoop(head);
    head = reverseusingRecursion(prev, curr);
    cout << endl;
    print(head);
    cout << endl;

    return 0;
}