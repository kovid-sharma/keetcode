/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL) return NULL;
        while(1)
        {   
            if(root->left==NULL and root->val>val)
                return NULL;
            else if(root->right==NULL and root->val<val)
                return NULL;
            else if(root->val==val)
                return root;
            else if(root->val>val)//left
                root=root->left;
            else if(root->val<val)//right
                root=root->right;
        }
    }
};