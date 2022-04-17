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
    void traverse(TreeNode*&root,TreeNode*&traver)
    {
        if(root==NULL)return;
        traverse(root->left,traver);
        traver->right=new TreeNode(root->val);
        traver=traver->right;
        traverse(root->right,traver);
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode*ret= new TreeNode(-1);
        TreeNode*traver=ret;
        traverse(root,traver);
        return ret->right;
    }
};