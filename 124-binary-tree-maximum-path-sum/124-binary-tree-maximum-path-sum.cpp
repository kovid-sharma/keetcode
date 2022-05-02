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
    int ret=INT_MIN;
    int solve(TreeNode*root){
        if(root==NULL)
            return 0;
        int lbs=solve(root->left)+root->val;
        int rbs=solve(root->right)+root->val;
        ret=max({ret,lbs,rbs,lbs+rbs-root->val,root->val});
        return max({lbs,rbs,root->val});
    }
    int maxPathSum(TreeNode* root) {
        solve(root);
        return ret;
    }
};