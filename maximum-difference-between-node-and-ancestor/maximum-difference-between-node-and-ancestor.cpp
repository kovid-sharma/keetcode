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
    int maxAncestorDiff(TreeNode* root) {
        if(root==NULL)return 0;
        return help(root,root->val,root->val);
    }
    int help(TreeNode* traver,int m,int mi)
    {
        if(traver==NULL)
        {
            return m-mi;
        }
        m=max(m,traver->val);
        mi=min(mi,traver->val);
        return max(help(traver->left,m,mi),help(traver->right,m,mi));
    }
};