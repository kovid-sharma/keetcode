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
    int ret=0;
    TreeNode* convertBST(TreeNode* root) {
        if(root==NULL)return root;
        if(root)
        {
            convertBST(root->right);
            root->val+=ret;
            ret=root->val;
            convertBST(root->left);
        }
        return root;
    }
};