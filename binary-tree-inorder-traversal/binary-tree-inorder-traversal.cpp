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
    void in(vector<int>&an,TreeNode*root){
        if(root==NULL)
            return;
        in(an,root->left);
        an.push_back(root->val);
        in(an,root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        in(ans,root);
        return ans;
    }
};