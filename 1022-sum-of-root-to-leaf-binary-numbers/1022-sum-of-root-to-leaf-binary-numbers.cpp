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
    int sumRootToLeaf(TreeNode* root) {
        return help(root,0);
    }
    int help(TreeNode*sam,int sum)
    {
        if(sam==NULL) return 0;
        sum+= sum+sam->val;
        if(sam->left==NULL and sam->right==NULL)
            return sum;
        else
            return help(sam->left,sum)+help(sam->right,sum);
    }
};