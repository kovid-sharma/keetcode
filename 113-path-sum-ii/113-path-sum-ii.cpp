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
    vector<vector<int>>ans;
    void dfs(TreeNode*root,int sum,vector<int>tmp)
    {
        if(root==NULL)
            return;
        tmp.push_back(root->val);
        if(sum==root->val and root->right==NULL and root->left==NULL)
        {
            ans.push_back(tmp);
            // return;
        }
        dfs(root->left,sum-root->val,tmp);
        dfs(root->right,sum-root->val,tmp);
        tmp.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        
        vector<int>tmp;
        dfs(root,sum,tmp);
        return ans;
    }
};