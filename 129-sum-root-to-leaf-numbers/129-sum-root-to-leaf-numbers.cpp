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
    int sumNumbers(TreeNode* root) {
        //bfs se karunga
        int ans=0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty())
        {
            int sz=q.size();
            for(int i=0;i<sz;i++)
            {
                auto fr=q.front();
                q.pop();
                TreeNode*tmp=fr.first;
                int lastSum=fr.second;
                lastSum=lastSum*10+tmp->val;
                if(tmp->right)
                    q.push({tmp->right,lastSum});
                if(tmp->left)
                    q.push({tmp->left,lastSum});
                if(tmp->left==NULL and tmp->right==NULL)
                    ans+=lastSum;
            }
            
        }
        return ans;
    }
};