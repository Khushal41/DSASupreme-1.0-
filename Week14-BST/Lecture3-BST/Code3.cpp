#include <iostream>
#include <queue>
#include <limits.h>
using namespace std;

// Class representing a Node in the Binary Search Tree
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // Constructor to initialize a node with given data
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// Class to store metadata about the BST
class NodeData
{
public:
    int size;
    int minVal;
    int maxVal;
    bool validBST;

    NodeData()
    {
    }

    NodeData(int size, int max, int min, bool valid)
    {
        this->size = size;
        minVal = min;
        maxVal = max;
        validBST = valid;
    }
};

// Function to insert a node into the BST
Node *insertIntoBST(Node *root, int data)
{
    if (root == NULL)
    {
        // This is the first node, so create it
        root = new Node(data);
        return root;
    }

    // Not the first node, decide to go left or right
    if (root->data > data)
    {
        // Insert in left subtree
        root->left = insertIntoBST(root->left, data);
    }
    else
    {
        // Insert in right subtree
        root->right = insertIntoBST(root->right, data);
    }
    return root;
}

// Function to take input and build the BST
void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

// Function to perform level order traversal of the BST
void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    // Initially push root and a NULL marker
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // We have reached the end of the current level
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            // Print current node data
            cout << temp->data << " ";
            // Push left and right children if they exist
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

// Function to perform preorder traversal (NLR) of the BST
void preOrderTraversal(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

// Function to perform inorder traversal (LNR) of the BST
void inOrderTraversal(Node *root)
{
    if (root == NULL)
        return;

    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

// Function to perform postorder traversal (LRN) of the BST
void postOrderTraversal(Node *root)
{
    if (root == NULL)
        return;

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

// Function to find a node with a given target value in the BST
Node *findNodeInBST(Node *root, int target)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == target)
        return root;

    if (target > root->data)
    {
        // Search in the right subtree
        return findNodeInBST(root->right, target);
    }
    else
    {
        // Search in the left subtree
        return findNodeInBST(root->left, target);
    }
}

// Function to find the minimum value in the BST
int minVal(Node *root)
{
    Node *temp = root;
    if (temp == NULL)
    {
        return -1;
    }

    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp->data;
}

// Function to find the maximum value in the BST
int maxVal(Node *root)
{
    Node *temp = root;
    if (temp == NULL)
    {
        return -1;
    }

    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp->data;
}

// Function to delete a node with the given target value from the BST
Node *deleteNodeInBST(Node *root, int target)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == target)
    {
        // Node to be deleted found
        if (root->left == NULL && root->right == NULL)
        {
            // Leaf node
            return NULL;
        }
        else if (root->left == NULL && root->right != NULL)
        {
            Node *child = root->right;
            return child;
        }
        else if (root->left != NULL && root->right == NULL)
        {
            Node *child = root->left;
            return child;
        }
        else
        {
            // Node with two children
            int inorderPre = maxVal(root->left);
            root->data = inorderPre;
            root->left = deleteNodeInBST(root->left, inorderPre);
            return root;
        }
    }
    else if (target > root->data)
    {
        // Go to right subtree
        root->right = deleteNodeInBST(root->right, target);
    }
    else
    {
        // Go to left subtree
        root->left = deleteNodeInBST(root->left, target);
    }
    return root;
}

// Function to construct BST from sorted inorder array
Node *bstUsingInorder(int inorder[], int s, int e)
{
    if (s > e)
    {
        return NULL;
    }

    int mid = (s + e) / 2;
    int element = inorder[mid];
    Node *root = new Node(element);

    root->left = bstUsingInorder(inorder, s, mid - 1);
    root->right = bstUsingInorder(inorder, mid + 1, e);

    return root;
}

// Function to convert BST into sorted doubly linked list
void convertIntoSortedDLL(Node *root, Node *&head)
{
    if (root == NULL)
    {
        return;
    }

    // Convert right subtree into DLL
    convertIntoSortedDLL(root->right, head);

    // Attach root node
    root->right = head;
    if (head != NULL)
        head->left = root;

    // Update head
    head = root;

    // Convert left subtree into DLL
    convertIntoSortedDLL(root->left, head);
}

// Function to print the sorted doubly linked list
void printLinkedList(Node *head)
{
    Node *temp = head;
    cout << endl;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->right;
    }
    cout << endl;
}

// Function to convert sorted doubly linked list into BST
Node *sortedLinkedListIntoBST(Node *&head, int n)
{
    if (n <= 0 || head == NULL)
        return NULL;

    Node *leftSubtree = sortedLinkedListIntoBST(head, n / 2);

    Node *root = head;
    root->left = leftSubtree;

    head = head->right;

    // Solve right part
    root->right = sortedLinkedListIntoBST(head, n - 1 - n / 2);
    return root;
}

// Function to find the largest BST subtree in a given tree
NodeData *findLargestBST(Node *root, int &ans)
{
    if (root == NULL)
    {
        NodeData *temp = new NodeData(0, INT_MIN, INT_MAX, true);
        return temp;
    }

    NodeData *leftKaAns = findLargestBST(root->left, ans);
    NodeData *rightKaAns = findLargestBST(root->right, ans);

    NodeData *currNodeKaAns = new NodeData();
    currNodeKaAns->size = leftKaAns->size + rightKaAns->size + 1;
    currNodeKaAns->maxVal = max(root->data, rightKaAns->maxVal);
    currNodeKaAns->minVal = min(root->data, leftKaAns->minVal);

    if (leftKaAns->validBST && rightKaAns->validBST && (root->data > leftKaAns->maxVal && root->data < rightKaAns->minVal))
    {
        currNodeKaAns->validBST = true;
    }
    else
    {
        currNodeKaAns->validBST = false;
    }

    if (currNodeKaAns->validBST)
    {
        ans = max(ans, currNodeKaAns->size);
    }
    return currNodeKaAns;
}

int main()
{
    // Creating nodes manually
    Node *root = new Node(50);
    Node *first = new Node(30);
    Node *second = new Node(60);
    Node *third = new Node(5);
    Node *fourth = new Node(20);
    Node *fifth = new Node(45);
    Node *sixth = new Node(70);
    Node *seventh = new Node(65);
    Node *eight = new Node(80);

    root->left = first;
    root->right = second;
    first->left = third;
    first->right = fourth;
    second->left = fifth;
    second->right = sixth;
    sixth->left = seventh;
    sixth->right = eight;

    cout << "Printing the tree" << endl;
    levelOrderTraversal(root);

    int ans = 0;
    findLargestBST(root, ans);
    cout << "Largest BST ka Size: " << ans << endl;

    return 0;
}
