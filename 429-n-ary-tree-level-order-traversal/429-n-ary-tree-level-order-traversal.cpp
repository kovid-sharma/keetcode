/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
//fking bfs
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>ans;
        if(!root)
            return ans;
        queue<Node*>q;
        q.push(root);
        ans.push_back({root->val});
        while(!q.empty())
        {
            int n=q.size();
            vector<int>now;
            for(int i=0;i<n;i++)
            {
                Node*tmp=q.front();
                q.pop();
                for(int i=0;i<tmp->children.size();i++)
                {
                    if(tmp->children[i]){
                        q.push(tmp->children[i]);
                        now.push_back(tmp->children[i]->val);
                    }
                }
            }
            if(!now.empty())
                ans.push_back(now);
        }
        return ans;
    }
};