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
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL)return false;
        queue<pair<TreeNode*,int>>q;
        q.push({root,sum});
        while(!q.empty())
        {
            auto fr=q.front();
            q.pop();
            TreeNode*tmp=fr.first;
            int currRem=fr.second;
            if(tmp->left==NULL and tmp->right==NULL and currRem==tmp->val)
                return true;
            if(tmp->left)
                q.push({tmp->left,currRem-tmp->val});
            if(tmp->right)
                q.push({tmp->right,currRem-tmp->val});
        }
        return false;
    }
};