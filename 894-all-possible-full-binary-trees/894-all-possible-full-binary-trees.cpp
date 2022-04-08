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
    unordered_map<int,vector<TreeNode*>>mp;
    vector<TreeNode*> rec(int n)
    {   vector<TreeNode*>to_ret;
        if(n==1)
        {
           TreeNode*add=new TreeNode(0);
           to_ret.push_back(add);return to_ret;
        }
     if(mp.find(n)!=mp.end())
     {
         return mp[n];
     }
     for(int i=1;i<n;i+=2)
     {
        vector<TreeNode*>leftsubtree=rec(i);
         vector<TreeNode*>rightsubtree=rec(n-i-1);
         for(int j=0;j<rightsubtree.size();j++)
             for(int k=0;k<leftsubtree.size();k++)
             {
                 TreeNode*new_add=new TreeNode(0);
                 new_add->left=leftsubtree[k];
                 new_add->right=rightsubtree[j];
                 to_ret.push_back(new_add);
             }
         
     }
     mp[n]=to_ret;
     return to_ret;
    }
    vector<TreeNode*> allPossibleFBT(int n) {
        vector<TreeNode*>to_ret;
        if(!n%2)return to_ret;
        return rec(n);
    }
};