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
// goinf for iterative soln
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL)return new TreeNode(val);//for no bs in understanding this case
        TreeNode* ret=root;
        while(1)
        {
            if(root->val>val)//tar goes on left
            {
                if(root->left==NULL)
                {   
                    root->left=new TreeNode(val);
                    break;
                }
                else
                    root=root->left;
                
            }
            else  // no need to think for two number being equal atq
            {
                if(root->right==NULL)
                {   
                    root->right=new TreeNode(val);
                    break;
                }
                else
                    root=root->right;
            }
        }
        return ret;
    }
};