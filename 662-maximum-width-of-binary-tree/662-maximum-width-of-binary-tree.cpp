class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL)
            return 0;
        int res=1;
        queue<pair<TreeNode*,int>>q;
        q.push(make_pair(root,0));
        while(!q.empty())
        {
            int cnt_size=q.size();
            auto it= q.front();
            int str= it.second;
            auto it2= q.back();
            int end= it2.second;
            res=max(res,abs(str-end)+1);
            while(cnt_size--)
            {
              auto it3= q.front();
                q.pop();
                long long idxnew= it3.second;
                idxnew-=str;
                if(it3.first->left!=NULL)
                    q.push(make_pair(it3.first->left,2*idxnew+1));
                if(it3.first->right!=NULL)
                    q.push(make_pair(it3.first->right,2*idxnew+2));
            }
        }
        return res;
    }
};