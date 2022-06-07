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
    int solve(TreeNode*root,unordered_map<TreeNode*,int>&dp){
        if(root==NULL)
            return 0;
        if(dp.find(root)!=dp.end())
            return dp[root];
        int youAndGrand=0;
        int notYouChild=0;
        youAndGrand+=root->val;//adding you
        if(root->left)
            youAndGrand+=solve(root->left->left,dp);
        if(root->left)
            youAndGrand+=solve(root->left->right,dp);
        if(root->right)
            youAndGrand+=solve(root->right->left,dp);
        if(root->right)
            youAndGrand+=solve(root->right->right,dp);
        notYouChild+=solve(root->left,dp);
        notYouChild+=solve(root->right,dp);
        return dp[root]=max(youAndGrand,notYouChild);
    }
    int rob(TreeNode* root) {
        unordered_map<TreeNode*,int>dp;
        return solve(root,dp);
    }
};