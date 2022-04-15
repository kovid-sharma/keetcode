class Solution {
public:
    int high(TreeNode*root)
    {
        if(!root)return 0;
        int lmax= high(root->left);
        int rmax=high(root->right);
        return max(lmax,rmax)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(!root)return true;
        int lhigh= high(root->left);
        int rhigh=high(root->right);
        if(abs(rhigh-lhigh)<=1)
        {
            if(isBalanced(root->left) and isBalanced(root->right))
                return true;
        }
        return false;
    }
};