#include <iostream>
#include <queue>
using namespace std;

// Definition of the Node class representing each node in the binary search tree (BST)
class Node
{
public:
    int data;    // Data held by the node
    Node *left;  // Pointer to the left child node
    Node *right; // Pointer to the right child node

    // Constructor to initialize the node with a value and set children to NULL
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to insert a new node with given data into the BST
Node *insertIntoBST(Node *root, int data)
{
    // If the tree is empty, create the first node
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    // If the tree is not empty, find the correct position for the new node
    if (root->data > data)
    {
        // Insert in the left subtree
        root->left = insertIntoBST(root->left, data);
    }
    else
    {
        // Insert in the right subtree
        root->right = insertIntoBST(root->right, data);
    }
    return root;
}

// Function to take input from the user and create the BST
void takeInput(Node *&root)
{
    int data;
    cin >> data;

    // Continue taking input until -1 is entered
    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

// Function to perform level order traversal (breadth-first traversal) of the BST
void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    // Initialize the queue with the root node
    q.push(root);
    q.push(NULL); // Marker for the end of a level

    while (!q.empty())
    {
        // Get the front node from the queue
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // End of a level
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL); // Add marker for the next level
            }
        }
        else
        {
            // Print the current node's data
            cout << temp->data << " ";
            // Add the left and right children to the queue if they exist
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

// Function to perform pre-order traversal (NLR: Node-Left-Right) of the BST
void preOrderTraversal(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

// Function to perform in-order traversal (LNR: Left-Node-Right) of the BST
void inOrderTraversal(Node *root)
{
    if (root == NULL)
        return;

    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

// Function to perform post-order traversal (LRN: Left-Right-Node) of the BST
void postOrderTraversal(Node *root)
{
    if (root == NULL)
        return;

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

// Function to find a node with the given target value in the BST
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
    // Base Case
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
            // Node with only right child
            Node *child = root->right;
            return child;
        }
        else if (root->left != NULL && root->right == NULL)
        {
            // Node with only left child
            Node *child = root->left;
            return child;
        }
        else
        {
            // Node with both children
            int inorderPre = maxVal(root->left);                  // Find inorder predecessor
            root->data = inorderPre;                              // Replace node's data with inorder predecessor
            root->left = deleteNodeInBST(root->left, inorderPre); // Delete inorder predecessor
            return root;
        }
    }
    
    else if (target > root->data)
    {
        // Search in the right subtree
        root->right = deleteNodeInBST(root->right, target);
    }
    else if (target < root->data)
    {
        // Search in the left subtree
        root->left = deleteNodeInBST(root->left, target);
    }
    return root;
}

int main()
{
    Node *root = NULL;
    cout << "Enter the data for Node " << endl;
    takeInput(root); // Take input from user to build the BST
    cout << "Printing the tree" << endl;
    levelOrderTraversal(root); // Print the BST in level order
    cout << endl;

    // cout << "Printing Inorder: " << endl;
    // inOrderTraversal(root); // Print the BST in in-order
    // cout << endl;
    // cout << "Printing Preorder: " << endl;
    // preOrderTraversal(root); // Print the BST in pre-order
    // cout << endl;
    // cout << "Printing Postorder: " << endl;
    // postOrderTraversal(root); // Print the BST in post-order
    // cout << endl;

    // // Find a node with value 155
    // Node *foundNode = findNodeInBST(root, 155);
    // cout << "Present or not : " << (foundNode != NULL) << endl;

    // Print the minimum and maximum values in the BST
    // cout << endl
    //      << "Minimum value: " << minVal(root) << endl;
    // cout << endl
    //      << "Maximum value: " << maxVal(root) << endl;

    // Delete a node with value 100
    // ex :- 100 50 150 40 50 175 110 -1
    root = deleteNodeInBST(root, 100);
    levelOrderTraversal(root); // Print the BST after deletion

    return 0;
}
