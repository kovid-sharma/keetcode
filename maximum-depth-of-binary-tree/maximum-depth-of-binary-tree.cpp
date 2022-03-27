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
 recursive first then iterative
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root)return 0;
        queue<TreeNode*>q;
        q.push(root);
        int ans=0;
        while(!q.empty())
        {
            int n=q.size();
            
            for(int i=0;i<n;i++)
            {
               TreeNode*now=q.front();
               q.pop();
               if(now)
               {    
                   if(now->left)
                   q.push(now->left);
                   if(now->right)
                   q.push(now->right);
               }
               
            }
            ans++;
        }
        return ans;
    }
};