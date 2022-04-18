class Solution {
public:
    int ans;
    int cnt=0;
    void traver(TreeNode*root,int k)
    {
        if(root==NULL)return;
        traver(root->left,k);
        if(++cnt==k)ans=root->val;
        traver(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        traver(root,k);
        return ans;
    }
};