/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        //base case
        if(root == NULL)
            return NULL;
        //case 1 :- p and q is less than root data
        if(p->val < root->val && q->val < root->val) {
            return lowestCommonAncestor(root->left, p, q);
        }
        // case 2 :- p and q is grater than root data
        else if(p->val > root->val && q->val > root->val) {
            return lowestCommonAncestor(root->right, p,q);
        }

        // case 3 :- 
        else if(p->val < root->val && q->val > root->val) {
            return root;
        }
        //case 4
        else if(q->val < root->val && p->val > root->val) {
            return root;
        }
        return root;
    }
};






