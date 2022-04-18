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
    int help(TreeNode*root,int &k)
    {
        if(root)
        {
            int now=help(root->left,k);
            if(k==0)return now;
            if(--k==0)return root->val;
            else return help(root->right,k);
        }return -1;
    }
    int kthSmallest(TreeNode* root, int k) {
        return help(root,k);
    }
};