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
    unordered_map<int,int>mp;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int sz=inorder.size();
        for(int i=0;i<sz;i++)
            mp[inorder[i]]=i;
        int preidx=0;
        int in_st=0;
        int in_en=sz-1;
        return builder(preidx,in_st,in_en,inorder,preorder);
    }
    TreeNode* builder(int& p,int s,int e,vector<int>& inorder,vector<int>& preorder)
    {   
        if(s>e)return NULL;
        TreeNode*new_root=new TreeNode(preorder[p]);
        p++;
        int id= mp[new_root->val];
        new_root->left= builder(p,s,id-1,inorder,preorder);
        new_root->right=builder(p,id+1,e,inorder,preorder);
        return new_root;
    }
};