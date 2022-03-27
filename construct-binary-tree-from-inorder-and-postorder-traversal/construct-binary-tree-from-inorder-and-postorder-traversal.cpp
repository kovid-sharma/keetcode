
class Solution {
public:
     unordered_map<int,int>mp;
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int num=inorder.size();
       
        for(int i=0;i<num;i++)
            mp[inorder[i]]=i;
        int postroot=num-1;
        return builder(inorder,postorder,postroot,0,num-1);
    }
    TreeNode* builder(vector<int>&in,vector<int>&po,int& postroot,int st,int en)
    {
        if(en<st)return nullptr;
        TreeNode*root= new TreeNode(po[postroot]);
        postroot--;
        int idx=mp[root->val];
        root->right= builder(in,po,postroot,idx+1,en);
        root->left= builder(in,po,postroot,st,idx-1);
        return root;
    }
};