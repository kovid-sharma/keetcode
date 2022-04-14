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
    TreeNode*glob;
    void help(int val,TreeNode*root)
    {
        if(root==NULL)return;
        if(root->val==val)
        {
            glob=root;return;
        }
        if(root->val>val)
            help(val,root->left);
        else help(val,root->right);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        help(val,root);
        return glob;
    }
};