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
 iterative karunga
 lvl order traversal akrlete hai fir symetry dekho
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root)return true;
        queue<TreeNode*>q;
        q.push(root->left);
        q.push(root->right);
        while(!q.empty())
        {
            int n=q.size();
            if(n%2==1 and n!=1)
                return false;
            TreeNode*tmp=q.front();
            q.pop();
            TreeNode*tmp2=q.front();
            q.pop();
            if(tmp==NULL and tmp2)return false;
            if(tmp and tmp2==NULL)return false;
            if(tmp and tmp2)
            {
                if(tmp->val!=tmp2->val)return false;
                q.push(tmp->left);
                q.push(tmp2->right);
                q.push(tmp->right);
                q.push(tmp2->left);
            }
            
        }
        return true;
    }
};