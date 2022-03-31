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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        bool lvl=false;
        while(!q.empty())
        {
            int n=q.size();
            int prev;
            if(lvl)
                prev=INT_MAX;
            else
                prev=0;
            while(n--)
            {
                TreeNode* now=q.front();
                q.pop();
                if(now->left)q.push(now->left);
                if(now->right)q.push(now->right);
                if(!lvl){
                    if(now->val%2==0 or prev>=now->val)return false;
                }
                else{
                    if(now->val%2==1 or prev<=now->val)return false;
                }
                prev=now->val;
                
            }
            lvl=!lvl;
        }
        return true;
    }
};