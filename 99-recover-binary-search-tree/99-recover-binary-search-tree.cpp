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
    vector<int>ans;
    void traver(TreeNode*root){
        if(root){
        traver(root->left);
        ans.push_back(root->val);
        traver(root->right);
        }
    }
    void fix(int &idx,TreeNode*root)
    {
        if(root)
        {
            fix(idx,root->left);
            root->val=ans[idx];idx++;
            fix(idx,root->right);
        }
    }
    void recoverTree(TreeNode* root) {  
        traver(root);
        sort(ans.begin(),ans.end());
        int idx=0;
        fix(idx,root);
        //for(auto it:ans)cout<<it<<" ";
    }
};