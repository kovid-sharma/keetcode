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
    TreeNode*prev=new TreeNode(INT_MIN);
    TreeNode*swap1=NULL;
    TreeNode*swap2=NULL;
    void traver(TreeNode*root)
    {   
        if(root){
        traver(root->left);
        if(swap1==NULL and prev->val>root->val)
        {
            swap1=prev;
        }
        if(swap1!=NULL and prev->val>root->val){
            swap2=root;
        }
        prev=root;
        traver(root->right);
        }
    }
    void recoverTree(TreeNode* root) {
        traver(root);
        swap(swap1->val,swap2->val);
    }
};