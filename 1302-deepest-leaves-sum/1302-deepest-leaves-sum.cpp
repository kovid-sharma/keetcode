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
    int mH=0;
    int hei(TreeNode*root){
        if(root==NULL)
            return 0;
        return max(hei(root->left),hei(root->right))+1;
    }
    int sumAdd(TreeNode*root,int iter){
        if(root==NULL)
            return 0;
        if(iter==mH-1)
            return root->val;
        return sumAdd(root->left,iter+1)+ sumAdd(root->right,iter+1);
    }
    int deepestLeavesSum(TreeNode* root) {
    
        mH=hei(root);
        return sumAdd(root,0);
    }
};