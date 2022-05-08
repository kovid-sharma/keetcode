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
    int count=0;
pair<int,int> counthelp(TreeNode* root){
	if(root==NULL) return {0,0};
	pair<int,int> left=counthelp(root->left);
	pair<int,int> right=counthelp(root->right);
	int sum=left.first+right.first;
    sum+=root->val;
	int numnode=(left.second+right.second+1);        
	if((sum/numnode)==root->val)
        count++;;
	return {sum,numnode};
}
int averageOfSubtree(TreeNode* root) {
	counthelp(root);
	return count;
}
};