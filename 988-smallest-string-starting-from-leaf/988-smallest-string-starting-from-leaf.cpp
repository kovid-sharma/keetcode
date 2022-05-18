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
    string ans="|";
    void dfs(TreeNode*root,string &tmp)
    {
        if(root==NULL)
            return;
        char ch='a'+root->val;
        tmp=ch+tmp;
        if(root->left==NULL and root->right==NULL)
            ans=min(ans,tmp);
        dfs(root->left,tmp);
        dfs(root->right,tmp);
        tmp.erase(tmp.begin());
    }
    string smallestFromLeaf(TreeNode* root) {
        string tmp;
        dfs(root,tmp);
        return ans;
    }
};