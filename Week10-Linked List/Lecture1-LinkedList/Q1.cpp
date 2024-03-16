// Singly LL Code example
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // Constructor Create :-
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    // Constructor Create :-
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
// Print Function :-
void print(Node *head)
{
    Node *temp = head; // pointer create
    while (temp != NULL) // till go tu NULL
    {
        cout << temp->data << " "; // data print
        temp = temp->next;         // go to next node
    }
}
int main()
{
    // 1-> Node Create :-
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);

    // 2-> Node Link :-
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    cout << "Printing LL :-" << endl;
    // 3-> Node Function Call :-
    print(first);

    return 0;
}