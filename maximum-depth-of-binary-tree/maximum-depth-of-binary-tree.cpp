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
 recursive first then iterative
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        int left=maxDepth(root->left);
        int rght=maxDepth(root->right);
        return max(left,rght)+1;
    }
};