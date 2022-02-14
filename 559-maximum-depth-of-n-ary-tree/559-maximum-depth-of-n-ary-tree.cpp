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

class Solution {
public:
    int maxDepth(Node* root) {
        if(root==NULL)
            return 0;
        queue<Node*>q;
        int d=0;
        q.push(root);
        while(!q.empty())
        {
            d++;
            int n=q.size();
            while(n--)
            {
                Node*tmp=q.front();
                q.pop();
                for(auto it:tmp->children)
                {
                    if(it!=NULL)
                        q.push(it);
                }
            }
        }
        return d;
    }
};