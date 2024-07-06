// # Complte Binary tree Using Heap
#include <iostream>
#include <queue>
#include <climits> // For INT_MIN
using namespace std;

struct Node
{
        int data;
        Node *left;
        Node *right;

        Node(int val)
        {
                data = val;
                left = right = NULL;
        }
};

pair<bool, int> solve(Node *root)
{
        // base case
        if (root == NULL)
        {
                pair<bool, int> p = make_pair(true, INT_MIN);
                return p;
        }
        if (root->left == NULL && root->right == NULL)
        {
                // leaf node
                pair<bool, int> p = make_pair(true, root->data);
                return p;
        }

        pair<bool, int> leftAns = solve(root->left);
        pair<bool, int> rightAns = solve(root->right);

        if (leftAns.first == true &&
            rightAns.first == true &&
            root->data > leftAns.second &&
            root->data > rightAns.second)
        {
                pair<bool, int> p = make_pair(true, root->data);
                return p;
        }
        else
        {
                pair<bool, int> p = make_pair(false, root->data);
                return p;
        }
}

Node *buildSampleTree()
{
        Node *root = new Node(10);
        root->left = new Node(5);
        root->right = new Node(20);
        root->left->left = new Node(3);
        root->left->right = new Node(7);
        root->right->left = new Node(15);
        root->right->right = new Node(30);
        return root;
}

void printResult(pair<bool, int> result)
{
        if (result.first)
        {
                cout << "The subtree is a valid BST with maximum value: " << result.second << endl;
        }
        else
        {
                cout << "The subtree is not a valid BST. Node causing issue has value: " << result.second << endl;
        }
}

int main()
{
        Node *root = buildSampleTree();
        pair<bool, int> result = solve(root);
        printResult(result);

        return 0;
}
