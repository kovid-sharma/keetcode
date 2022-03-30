class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(!root)return ans;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            vector<int>to_pus;
            for(int i=0;i<n;i++)
            {
                to_pus.push_back(q.front()->val);
                TreeNode*fr=q.front();
                 q.pop();
                if(fr->left)
                    q.push(fr->left);
                if(fr->right)
                    q.push(fr->right);
            }
            ans.push_back(to_pus);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};