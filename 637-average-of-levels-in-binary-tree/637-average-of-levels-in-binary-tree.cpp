class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        if(!root)return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            double ns=0;
            for(int i=0;i<n;i++)
            {
                TreeNode*tmp=q.front();
                q.pop();
                ns+=tmp->val;
                if(tmp->left)
                    q.push( tmp->left);
                if(tmp->right)
                    q.push( tmp->right);
                
            }
            ans.push_back(ns/n);
        }
        return ans;
    }
};