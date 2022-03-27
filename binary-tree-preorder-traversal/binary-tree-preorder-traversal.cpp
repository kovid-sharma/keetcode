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
    void pre(vector<int>&abs,TreeNode*root){
        if(root==NULL)
            return;
        abs.push_back(root->val);
        pre(abs,root->left);
        pre(abs,root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        pre(ans,root);
        return ans;
    }
    
};