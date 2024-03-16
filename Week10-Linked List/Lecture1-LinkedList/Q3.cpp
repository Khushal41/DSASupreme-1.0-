// Insert At Position 
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

// I want to insurt node right at the heade of Linked List :-
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
};

void inserAtPosition(int data, int position, Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // Step 1:-Find position of previous ptr and current ptr_fun
    // Codition for insurt at "HEAD"
    if (position == 0)
    {
        insertAtHead(head, tail, data);
        return;
    }
    // Condition for insurt at "Tail"
    int len = findLength(head);
    if (position >= len)
    {
        insertAtTail(head, tail, data);
        return;
    }
    // Step 1:-find prev & curr
    int i = 1; 
    Node *prev = head;
    while (i < position)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;
    // step 2:- Create new node
    Node *newNode = new Node(data);
    // Step 3:-
    newNode->next = curr;
    // step 4:-
    prev->next = newNode;
};

void deleteNode(int position, Node *&tail, Node *&head)
{
    if (head == NULL)
    {
        cout << "Can't delete,LL is empty ";
        return;
    }
    // Deleting first node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    // Deleting last node
    int len = findLength(head);

    if (position == len)
    {
        // step 1: Find prv
        int i = 1;
        Node *prev = head;

        while (i < position - 1)
        {
            prev = prev->next;
            i++;
        }
        // Step 2:-
        prev->next = NULL;
        // Step 3:-
        Node *temp = tail;
        // Step 4 :-
        tail = prev;
        // step 5 :-
        delete temp;
        return;
    }

    // Deleting Middel node
    // step 1:-find prev and curr
    int i = 1;
    Node *prev = head;
    while (i < position)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;
    // Step 2:-
    prev->next = curr->next;
    // Step 3:-
    curr->next = NULL;
    // sTEP 4:-
    delete curr;
};


int main()
{
    // Node *head = new Node(10);
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 60);
    insertAtHead(head, tail, 90);
    insertAtTail(head, tail, 77);

    print(head);
    cout << endl;
    cout << "head :" << head->data << endl;
    cout << "tail :" << tail->data << endl;

    inserAtPosition(106, 0, head, tail);
    cout << "Printing after insert at position call" << endl;
    print(head);
    cout << endl;
    cout << "head :" << head->data << endl;
    cout << "tail :" << tail->data << endl;

    // deleteNode(1, head, tail);
    // cout << endl;
    // print(head);
    // cout << endl;

    return 0;
}