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
    
    vector<TreeNode*>func(int st,int en){
        vector<TreeNode*>ret;
        if(st==en) return {new TreeNode(st)};
        if(st>en) return {NULL};
        for(int i=st;i<=en;i++){
            vector<TreeNode*>l= func(st,i-1);
            vector<TreeNode*>r= func(i+1,en);
        
        for(auto it:l)
            for(auto q:r)ret.push_back(new TreeNode(i,it,q));}
        return ret;
                
    }
    vector<TreeNode*> generateTrees(int n) {
        vector<TreeNode*>ans= func(1,n);
        return ans;
    }
};
