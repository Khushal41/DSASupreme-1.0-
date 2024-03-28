// Q-> Cheak a LL is Palindrome or Not 
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
// Reverse LL :-
Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *next = curr->next;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    // return LL head
    return prev;
};

bool cheakPalindrome(Node *head)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return true;
    }
    if (head->next == NULL)
    {
        // ONLY ONE NODE
        return true;
    }
    // Grather than 1 Node in LL :-
    // Step A:- Find the middle Node
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }

    // slow pointer find middle mode
    // Step B: Reverse LL after middle node
    Node *reverseLLKaHead = reverse(slow->next);

    // Joint the reversed LL into left part
    slow->next = reverseLLKaHead;

    // step c:-start comparision
    Node *temp1 = head;
    Node *temp2 = reverseLLKaHead;
    while (temp2 != NULL)
    {
        if (temp1->data != temp2->data)
        {
            // not palindrome
            return false;
        }
        else
        {
            // if data is  equal
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    // if palindrome return true 
    return true;
};
int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(30);
    Node *fifth = new Node(20);
    Node *sixth = new Node(10);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    bool isPalindrome = cheakPalindrome(head);
    if (isPalindrome)
    {
        cout << "LL is valid palindrome " << endl;
    }
    else
    {
        cout << "LL is not valid palindrome " << endl;
    }

    return 0;
}