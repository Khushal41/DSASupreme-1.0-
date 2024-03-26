// Detect And Delete Group 
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

Node *reverseKNodes(Node *head, int k)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return NULL;
    }
    int len = getLength(head);
    if (k > len)
    {
        // cout << "Enter valid value for k" << endl;
        return head;
    }

    // It means number of node in LL is grater than k
    // Step A:- Reverse k node of LL
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = curr->next;
    int count = 0;

    while (count < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    // Step B:- Recursive Call
    if (forward != NULL)
    {
        // WE still have node left to reverse
        head->next = reverseKNodes(forward, k);
    }

    // Step C:-creturn head of modified ll
    return prev;
};

bool cheakForLoop(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return false;
    }

    Node *slow = head;
    Node *fast = head;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        if (slow == fast)
        {
            // loop present
            return true;
        }
    }
    // fast NULL hogya
    return false;
};

Node *startingPointLoop(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return NULL;
    }

    Node *slow = head;
    Node *fast = head;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        if (slow == fast)
        {
            slow = head;
            break;
        }
    }
    // They not meet 
    while (slow != head)
    {
        slow = slow->next;
        fast = fast->next;
    }
    // IF they meet 
    return slow;
}

Node *removeLoop(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return NULL;
    }

    Node *slow = head;
    Node *fast = head;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        if (slow == fast)
        {
            slow = head;
            break;
        }
    }
    Node *prev = fast;
    while (slow != fast)
    {
        prev = fast;
        slow = slow->next;
        fast = fast->next;
    }
    prev->next = NULL;
    return slow;
};

int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);
    Node *siven = new Node(70);
    Node *eight = new Node(80);
    Node *ninth = new Node(90);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = siven;
    siven->next = eight;
    eight->next = ninth;
    ninth->next = fifth;

    // print(head);

    cout << "Loops is present or not : " << cheakForLoop(head) << endl;

    cout << "Starting point of loop : " << startingPointLoop(head)->data << endl;

    removeLoop(head);
    print(head);
    cout << "Loops is present or not : " << cheakForLoop(head) << endl;

    return 0;
}