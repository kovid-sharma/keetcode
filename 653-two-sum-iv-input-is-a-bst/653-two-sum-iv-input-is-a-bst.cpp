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
    TreeNode* findJustSmall(TreeNode*mosst,TreeNode*traver)
    {
        TreeNode*ret;
        while(traver!=NULL)
        {
            if(traver->val<mosst->val)
            {
                ret=traver;
                traver=traver->right;
            }
            else
                traver=traver->left;
        }
        return ret;
    }
    TreeNode* findJustBigg(TreeNode*least,TreeNode*traver)
    {
        TreeNode*ret;
        while(traver!=NULL)
        {
            if(traver->val>least->val)
            {
                ret=traver;
                traver=traver->left;
            }
            else
                traver=traver->right;
        }
        return ret;
    }
    bool findTarget(TreeNode* root, int k) {
        //first go to extreme values
        TreeNode*least=root;
        TreeNode*mosst=root;
        while(least->left!=NULL)
        {
            least=least->left;
        }
        while(mosst->right!=NULL)
        {
            mosst=mosst->right;
        }
        //reached
        while(mosst!=least)
        {
            int sum=mosst->val+least->val;
            if(sum>k)
            {
                mosst= findJustSmall(mosst,root);
            }
            else if(sum<k)
            {
                least=findJustBigg(least,root);
            }
            else
                return true;
            
        }
        return false;
        
    }
};