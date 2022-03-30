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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root)return ans;
        queue<TreeNode*>q;
        q.push(root);
        bool dorev=false;
        while(!q.empty())
        {
            int n=q.size();
            vector<int>curr(n);
            for(int i=0;i<n;i++)
            {
                TreeNode*tmp=q.front();
                q.pop();
                int idx=i;
                if(dorev)
                    idx=n-1-i;
                curr[idx]=tmp->val;
                if(tmp->left)
                    q.push(tmp->left);
                if(tmp->right)
                    q.push(tmp->right);
                
            }
            dorev=!dorev;
            ans.push_back(curr);
        }
        return ans;
    }
};