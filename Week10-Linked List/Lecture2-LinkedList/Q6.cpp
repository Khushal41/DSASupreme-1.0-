// Doubly Linked List [Deletion]
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

void deleteFromPos(Node *&head, Node *&tail, int position)
{
    if (head == NULL)
    {
        cout << "Linked list is empty";
        return;
    }
    if (head->next == NULL)
    {
        // single node case
        Node *temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }

    int len = getLength(head);
    if (position > len)
    {
        cout << "please enter a valid position " << endl;
        return;
    }

    if (position == 1)
    {
        // want to delete the first node case
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
        return;
    }

    if (position == len)
    {
        // delete last node
        Node *temp = tail;
        tail = tail->prev;
        temp->prev = NULL;
        tail->next = NULL;
        delete temp;
        return;
    }

    // delete from middle of linked list

    // step1: find left, curr, right
    int i = 1;
    Node *left = head;
    while (i < position - 1)
    {
        left = left->next;
        i++;
    }
    Node *curr = left->next;
    Node *right = curr->next;

    // step2:
    left->next = right;
    // step3:
    right->prev = left;
    // step4:
    curr->next = NULL;
    curr->prev = NULL;
    delete curr;
}

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

    // print(first);
    // cout << endl;

    deleteFromPos(head, tail, 1);

    cout << endl;
    print(head);
    cout << endl;

    return 0;
}